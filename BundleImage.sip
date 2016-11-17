namespace Isis {
  class BundleImage {
  %TypeHeaderCode
    #include "BundleImage.h"
  %End
  
  public:
    // QSharedPointer<BundleObservation> parentObservation();
    QString serialNumber();
    QString fileName();
  };
};
