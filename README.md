# create-cmake-app
Create default c++ application.  
This project creates default c++ cmake project.  
It produces a basic library that name is "module".  
The module library has sub-library that name is "module1".  
In the examples folder, there are one example application.  
The example application uses module library and has dependencies on other libraries.  
That application depends on OpenCV and Protobuf libraries.  

You can build this project using the command below.  
```
mkdir build && cd build
cmake -DCMAKE_TOOLCHAIN_FILE=/path/to/your/TOOLCHAIN_FILE -DUSE_OPENCV=ON ..
./examples/example1/example1
```
The CMAKE_TOOLCHAIN_FILE and USE_OPENCV are optional.  
You can install OpenCV library using [vcpkg](https://github.com/microsoft/vcpkg).  
```
git clone https://github.com/microsoft/vcpkg
On Windows> ./bootstrap-vcpkg.bat
On Unix-like> ./bootstrap-vcpkg.sh
```
Install OpenCV using vcpkg.  
```
./vcpkg install opencv4:x64-windows
./vcpkg install opencv4:x64-linux
./vcpkg install opencv4:x64-osx
```
Get your CMAKE_TOOLCHAIN_FILE path.  
```
./vcpkg integrate install
```
