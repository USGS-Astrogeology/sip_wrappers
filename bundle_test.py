import inspect

import pandas as pd
import numpy as np

import bundle
import inspect

def residuals(bundle_results):
    control_points = results.bundleControlPoints()

    header = ['id', 'file_name', 'serial_num', 'focal_plane_measuredX(mm)',
              'focal_plane_measuredY(mm)', 'sample', 'line', 'sample_residual',
              'line_residual', 'residual_magnitude', 'is_rejected']
    data = []

    for point in control_points:
        measures = point.measures()
        for measure in measures:
            row = [
                point.id(),
                measure.parentBundleImage().fileName(),
                measure.cubeSerialNumber(),
                measure.focalPlaneMeasuredX(),
                measure.focalPlaneMeasuredY(),
                measure.sample(),
                measure.line(),
                measure.sampleResidual(),
                measure.lineResidual(),
                measure.residualMagnitude(),
                measure.isRejected()]
            data.append(row)

    return pd.DataFrame(data, columns=header)

if __name__ == '__main__':
    bundle = bundle.Isis

    bundle_settings = bundle.BundleSettings()
    bundle_settings.setSolveOptions(solveRadius=True, errorPropagation=False)
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

    points = results.bundleControlPoints()
    measures = points[1].measures()

    print(len(points))
    print(points[3:8])
    print(points[0])

    print(measures)
    print(len(measures))
    print(points[1].numberOfMeasures())

    def residuals(bundle_results):
        control_points = results.bundleControlPoints()

        header = ['id', 'file_name', 'serial_num', 'focal_plane_measuredX(mm)',
                  'focal_plane_measuredY(mm)', 'sample', 'line', 'sample_residual',
                  'line_residual', 'residual_magnitude', 'is_rejected']
        data = []

        for point in control_points:
            measures = point.measures()
            for measure in measures:
                row = [
                    point.id(),
                    measure.parentBundleImage().fileName(),
                    measure.cubeSerialNumber(),
                    measure.focalPlaneMeasuredX(),
                    measure.focalPlaneMeasuredY(),
                    measure.sample(),
                    measure.line(),
                    measure.sampleResidual(),
                    measure.lineResidual(),
                    measure.residualMagnitude(),
                    measure.isRejected()]
                data.append(row)

        return pd.DataFrame(data, columns=header)

    print(residuals(results)[:5])

    import threading
