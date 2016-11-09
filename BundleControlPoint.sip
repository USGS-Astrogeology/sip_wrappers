#include <QVector>

#include <QSharedPointer>

#include "BundleMeasure.h"
#include "BundleSettings.h"
#include "ControlPoint.h"
#include "SparseBlockMatrix.h"
#include "SurfacePoint.h"

namespace Isis {
  class BundleControlPoint {

    %TypeHeaderCode
    #include "BundleControlPoint.h"
    #include <QSharedPointer>
    %End

    public:
      BundleControlPoint(Isis::ControlPoint *point); // default constructor
      BundleControlPoint(const Isis::BundleControlPoint &src);
      ~BundleControlPoint();

      // copy
      void copy(const Isis::BundleControlPoint &src);

      // mutators
      QSharedPointer<Isis::BundleMeasure> addMeasure(ControlMeasure *controlMeasure);
      void computeResiduals();
      void setNumberOfRejectedMeasures(int numRejected);
      void setRejected(bool reject);
      void setWeights(const QSharedPointer<Isis::BundleSettings> settings, double metersToRadians);
      void zeroNumberOfRejectedMeasures();

      // accessors
      bool isRejected() const;
      int numberOfMeasures() const;
      int numberOfRejectedMeasures() const;
      double residualRms() const;
      QString id() const;
      Isis::ControlPoint::PointType type() const;

      // string format methods
      QString formatBundleOutputSummaryString(bool errorPropagation) const;
      QString formatBundleOutputDetailString(bool errorPropagation, double RTM, bool solveRadius=false) const;
      QString formatValue(double value, int fieldWidth, int precision) const;
      QString formatAprioriSigmaString(int type, int fieldWidth, int precision, bool solveRadius=false) const;
      QString formatLatitudeAprioriSigmaString(int fieldWidth, int precision) const;
      QString formatLongitudeAprioriSigmaString(int fieldWidth, int precision) const;
      QString formatRadiusAprioriSigmaString(int fieldWidth, int precision, bool solveRadius=false) const;
      QString formatAdjustedSigmaString(int type, int fieldWidth, int precision,
                                        bool errorPropagation) const;
      QString formatLatitudeAdjustedSigmaString(int fieldWidth, int precision,
                                                bool errorPropagation) const;
      QString formatLongitudeAdjustedSigmaString(int fieldWidth, int precision,
                                                 bool errorPropagation) const;
      QString formatRadiusAdjustedSigmaString(int fieldWidth, int precision,
                                              bool errorPropagation) const;

  };
}
