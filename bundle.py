import isis
import inspect

bundle = isis.Isis

dir(bundle)

bundle_settings = bundle.BundleSettings()
bundle_settings.setSolveOptions(solveRadius=True, errorPropagation=True)
bundle_settings.setOutlierRejection(True)

obs_settings = bundle.BundleObservationSolveSettings()
pos_option = obs_settings.stringToInstrumentPositionSolveOption('POSITIONS')
obs_settings.setInstrumentPositionSettings(pos_option, positionAprioriSigma=100)

point_option = obs_settings.stringToInstrumentPointingSolveOption('Angles')
obs_settings.setInstrumentPointingSettings(point_option, True, anglesAprioriSigma=2.0)

bundle_settings.setObservationSolveOptions([obs_settings])

ba = bundle.BundleAdjust(bundle_settings, 'Ames_7-ImageLSTest_USGS_combined.net', 'cubes.lis', False)

results = ba.solveCholeskyBR()

results.outputText();
results.outputPointsCSV();
results.outputResiduals();

print(results)

results = results.bundleResults()
print(results.bundleControlPoints())


# print(inspect.getargspec(bundle.Isis.BundleAdjust.__init__)[0])
