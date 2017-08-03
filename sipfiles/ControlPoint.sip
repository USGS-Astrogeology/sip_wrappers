namespace Isis {

  class ControlPoint : public QObject {
    %TypeHeaderCode
      #include "ControlPoint.h"
    %End
    public:
      enum PointType {
        Fixed = 0,
        Constrained = 1,
        Free = 2
      };


      enum Status {
        Failure,
        Success,
        PointLocked
      };

      enum ConstraintStatus {
        LatitudeConstrained = 0,
        LongitudeConstrained = 1,
        RadiusConstrained = 2,
//      XConstrained = 3,
//      YConstrained = 4,
//      ZConstrained = 5;
      };

      // This stuff input to jigsaw
      // How did apriori source get computed??
      struct SurfacePointSource {
        enum Source {
          None,
          User,
          AverageOfMeasures,
          Reference,
          Basemap,
          BundleSolution
        };
      };

      struct RadiusSource {
        enum Source {
          None,
          User,
          AverageOfMeasures,
          Ellipsoid,
          DEM,
          BundleSolution
        };
      };

      ControlPoint();
      ControlPoint(const QString &id);

      // Isis::ControlNet *Parent() { return parentNetwork; }

      // void Load(PvlObject &p);

      // void Add(ControlMeasure *measure);
      // int Delete(ControlMeasure *measure);
      // int Delete(QString serialNumber);
      // int Delete(int index);
      // Status ResetApriori();

      // const Isis::ControlMeasure *GetMeasure(QString serialNumber) const;
      // ControlMeasure *GetMeasure(QString serialNumber);

      // const ControlMeasure *GetMeasure(int index) const;
      // ControlMeasure *GetMeasure(int index);

      // const ControlMeasure *GetRefMeasure() const;
      // ControlMeasure *GetRefMeasure();

      // Status SetChooserName(QString name);
      // Status SetDateTime(QString newDateTime);
      // Status SetEditLock(bool editLock);
      // Status SetId(QString id);
      // Status SetRefMeasure(ControlMeasure *cm);
      // Status SetRefMeasure(int index);
      // Status SetRefMeasure(QString sn);
      // Status SetRejected(bool rejected);
      // Status SetIgnored(bool newIgnoreStatus);
      // Status SetAdjustedSurfacePoint(SurfacePoint newSurfacePoint);
      // Status SetType(PointType newType);
      //
      // Status SetAprioriRadiusSource(RadiusSource::Source source);
      // Status SetAprioriRadiusSourceFile(QString sourceFile);
      // Status SetAprioriSurfacePoint(SurfacePoint aprioriSP);
      // Status SetAprioriSurfacePointSource(SurfacePointSource::Source source);
      // Status SetAprioriSurfacePointSourceFile(QString sourceFile);

//    Status UpdateSphericalPointCoordinates(const Latitude &lat, const Longitude &lon,
//                                      const Distance &radius);

      // Status ComputeApriori();
      // Status ComputeResiduals();
      // Status ComputeResiduals_Millimeters();
      //
      // SurfacePoint GetAdjustedSurfacePoint() const;
      // SurfacePoint GetBestSurfacePoint() const;

      QString GetChooserName() const;
      QString GetDateTime() const;
      bool IsEditLocked() const;
      bool IsRejected() const;
      QString GetId() const;
      bool IsIgnored() const;
      bool IsValid() const;
      bool IsInvalid() const;
      bool IsFixed() const;

      bool HasAprioriCoordinates();
      bool IsConstrained();
      bool IsLatitudeConstrained();
      bool IsLongitudeConstrained();
      bool IsRadiusConstrained();
      int NumberOfConstrainedCoordinates();

      static QString PointTypeToString(PointType type);
      static PointType StringToPointType(QString pointTypeString);

      QString GetPointTypeString() const;
      // PointType GetType() const;

      static QString RadiusSourceToString(RadiusSource::Source source);
      static RadiusSource::Source StringToRadiusSource(QString str);
      QString GetRadiusSourceString() const;
      static QString SurfacePointSourceToString(SurfacePointSource::Source source);
      // static SurfacePointSource::Source StringToSurfacePointSource(QString str);
      QString GetSurfacePointSourceString() const;

      // SurfacePoint GetAprioriSurfacePoint() const;
      // RadiusSource::Source GetAprioriRadiusSource() const;
      // QString GetAprioriRadiusSourceFile() const;
      // SurfacePointSource::Source GetAprioriSurfacePointSource() const;
      // QString GetAprioriSurfacePointSourceFile() const;

      int GetNumMeasures() const;
      int GetNumValidMeasures() const;
      int GetNumLockedMeasures() const;
      bool HasSerialNumber(QString serialNumber) const;
      // int IndexOf(ControlMeasure *, bool throws = true) const;
      int IndexOf(QString sn, bool throws = true) const;
      int IndexOfRefMeasure() const;
      bool IsReferenceExplicit() const;
      QString GetReferenceSN() const;

      // Statistics GetStatistic(double(ControlMeasure::*statFunc)() const) const;
      // Statistics GetStatistic(long dataType) const;

      // QList< ControlMeasure * > getMeasures(bool excludeIgnored = false) const;
      // QList< QString > getCubeSerialNumbers() const;

      // const ControlMeasure *operator[](QString serialNumber) const;
      // ControlMeasure *operator[](QString serialNumber);

      // const ControlMeasure *operator[](int index) const;
      // ControlMeasure *operator[](int index);

      // bool operator!=(const ControlPoint &pPoint) const;
      // bool operator==(const ControlPoint &pPoint) const;
      // const ControlPoint &operator=(const ControlPoint &pPoint);

      // The next 7 methods are specifically to support BundleAdjust
      void ZeroNumberOfRejectedMeasures();
      void SetNumberOfRejectedMeasures(int numRejected);
      int GetNumberOfRejectedMeasures() const;
      double GetSampleResidualRms() const;
      double GetLineResidualRms() const;
      double GetResidualRms() const;
      void ClearJigsawRejected();

      // ControlPointFileEntryV0002 ToFileEntry() const;

    private:
      // void SetExplicitReference(ControlMeasure *measure);
      void ValidateMeasure(QString serialNumber) const;
      // void AddMeasure(ControlMeasure *measure);
      void PointModified();


    // private:
    //   ControlNet *parentNetwork;
    //
    //   //!< List of Control Measures
    //   QHash< QString, ControlMeasure * > * measures;
    //
    //   QStringList *cubeSerials;
    //
    //   ControlMeasure *referenceMeasure;
    //
    //   /**
    //    * This is the control point ID. This is supposed to be a unique
    //    *   identifier for control points. This often has a number in it, and
    //    *   looks like "T0052" where the next one is "T0053" and so on.
    //    */
    //   QString id;
    //
    //   /**
    //    * This is the user name of the person who last modified this control
    //    *   point. Modifications are things like updating the surface point, but
    //    *   not things like updating the last modified time. The calculations
    //    *   relating to this control point have to actually change for this to
    //    *   be updated. This is an empty string if we need to dynamically
    //    *   get the username of the caller when asked for (or written to file).
    //    */
    //   QString chooserName;
    //
    //   /**
    //    * This is the last modified date and time. This is updated automatically
    //    *   and works virtually in the same way as chooserName.
    //    */
    //   QString dateTime;
    //
    //   /**
    //    * What this control point is tying together.
    //    * @see PointType
    //    */
    //   PointType type;
    //
    //   /**
    //    * If we forced a build that we would normally have thrown an exception
    //    *   for then this is set to true. Otherwise, and most of the time, this
    //    *   is false.
    //    */
    //   bool invalid;
    //
    //   /**
    //    * This stores the edit lock state.
    //    * @see SetEditLock
    //    */
    //   bool editLock;
    //
    //   /**
    //    * This stores the jigsaw rejected state.
    //    * @see SetJigsawReject
    //    */
    //   bool jigsawRejected;
    //
    //   /**
    //    * This stores the constraint status of the a priori SurfacePoint
    //    *   @todo Eventually add x, y, and z
    //    */
    //   std::bitset<6> constraintStatus;
    //
    //   /**
    //    * This indicates if a program has explicitely set the reference in this
    //    *   point or the implicit reference is still the current reference. This
    //    *   is useful for programs that want to choose the reference for all
    //    *   points where this hasn't happened yet.
    //    */
    //   bool referenceExplicitlySet;
    //
    //   /**
    //    * True if we should preserve but ignore the entire control point and its
    //    *   measures.
    //    */
    //   bool ignore;
    //
    //   //! Where the apriori surface point originated from
    //   SurfacePointSource::Source aprioriSurfacePointSource;
    //
    //   //! FileName where the apriori surface point originated from
    //   QString aprioriSurfacePointSourceFile;
    //
    //   /**
    //    * Where the apriori surface point's radius originated from, most commonly
    //    *   used by jigsaw.
    //    */
    //   RadiusSource::Source aprioriRadiusSource;
    //
    //   /**
    //    * The name of the file that derives the apriori surface point's radius
    //    */
    //   QString aprioriRadiusSourceFile;
    //
    //   /**
    //    * The apriori surface point. This is the "known truth" or trustworthy
    //    *   point that should not be modified unless done very explicitely. This
    //    *   comes from places like hand picking where you really don't want the
    //    *   surface point to vary far from this point, but some variation is
    //    *   okay (1/10th of a pixel is fair for human accuracy for example). Very
    //    *   often this point does not exist.
    //    */
    //   SurfacePoint aprioriSurfacePoint;
    //
    //   /**
    //    * This is the calculated, or aposterori, surface point. This is what most
    //    *   programs should be working with and updating.
    //    */
    //   SurfacePoint adjustedSurfacePoint;
    //
    //   /**
    //    * This parameter is used and maintained by BundleAdjust for the jigsaw
    //    * application.  It is stored here because ControlPoint contains the index
    //    * of the measures.
    //    */
    //   int numberOfRejectedMeasures;
  };
};
