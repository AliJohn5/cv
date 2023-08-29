# cv
detecting 3D point using stereo vision 

first calibrate the two cameras:
cd test_for_opencv_lib
cd python_stereo_camera_calibrate/
python3 calib.py calibration_settings.yaml

copy camera matrices:
from camera_parameters take camera parameters and add them on cv/3Dpoint/bodypose3d

then run:
python3 ali.py 2 4

2,4 are camera index
