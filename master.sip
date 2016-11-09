%Module(name=bundle,
        version=0,
        keyword_arguments="Optional")

%ExportedHeaderCode
  #include <QLibrary>
  #include <QString>
%End

%InitialisationCode
    QString isis_root = QString::fromStdString(getenv("ISISROOT"));

    QString qt_lib = isis_root + "/3rdParty/lib/libQt5Widgets";
    QString isis_lib = isis_root + "/lib/libisis3";

    QLibrary libqt(qt_lib);
    libqt.setLoadHints(QLibrary::ExportExternalSymbolsHint);
    libqt.load();

    QLibrary libisis(isis_lib);
    libisis.setLoadHints(QLibrary::ExportExternalSymbolsHint);
    libisis.load();

%End


%Include type_conversions.sip

%Include ControlNet.sip
%Include Statistics.sip
%Include BundleResults.sip
%Include BundleSolutionInfo.sip
%Include BundleObservationSolveSettings.sip
%Include BundleSettings.sip
%Include BundleAdjust.sip
%Include MaximumLikelihoodWFunctions.sip
