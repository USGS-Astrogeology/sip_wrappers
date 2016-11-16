%Include type_conversions.sip

namespace Isis {
  class BundleMeasure {
    %TypeHeaderCode
      #include "BundleMeasure.h"
    %End

    public:

      bool isRejected() const;
      // Camera *camera() const;
      // Isis::BundleControlPoint *parentControlPoint();
      QSharedPointer<Isis::BundleImage> parentBundleImage();
      // QSharedPointer<BundleObservation> parentBundleObservation();
      // const QSharedPointer<BundleObservationSolveSettings> observationSolveSettings();

      double sample() const;
      double sampleResidual() const;
      double line() const;
      double lineResidual() const;
      double residualMagnitude() const;
      QString cubeSerialNumber() const;
      double focalPlaneComputedX() const;
      double focalPlaneComputedY() const;
      double focalPlaneMeasuredX() const;
      double focalPlaneMeasuredY() const;
      int observationIndex() const;
  };
};
