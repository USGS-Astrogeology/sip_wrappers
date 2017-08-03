// SIP Wrapper to the ISIS3 bundle class


namespace Isis {
  class BundleAdjust : public QObject {
    %TypeHeaderCode
    #include "BundleAdjust.h"
    %End

  public:
    BundleAdjust(PyObject* settings, const QString &cnetFile, const QString &cubeList, bool printSummary = true) [(QSharedPointer<Isis::BundleSettings>, QString, QString, bool)];
    %MethodCode
      int sipErr = 0;
      QSharedPointer<Isis::BundleSettings> *wrappedSettings = new QSharedPointer<Isis::BundleSettings>();

      Isis::BundleSettings *settings = (Isis::BundleSettings*) sipConvertToType(a0, sipType_Isis_BundleSettings, NULL, SIP_NOT_NONE, NULL, &sipErr);
      wrappedSettings->reset(settings);

      sipCpp = new sipIsis_BundleAdjust(*wrappedSettings, *a1, *a2, a3);
    %End

    Isis::BundleSolutionInfo solveCholeskyBR();
   };
};
