# PVRMonitorForUE4Plugin
Comprehensive real-time CPU/GPU statistics for PowerVR devices

![PVRMonitorPlugin](https://mk0imgtecie4vbskdqk.kinstacdn.com/wp-content/uploads/2019/03/monitor-demo-screen-1024x549.png)

The PVRMonitor Plugin for Unreal Engine provides a quick way to see handy real-time CPU/GPU statistics as an overlay on PowerVR devices.

A wide range of hardware counter statistics are available, depending on the exact hardware being used. Counters are displayed in a widget containing the maximum, minimum, and average values, and a configurable graph representing the previous 32 frames. 

These hardware counters are the same ones that are available with our PVRTune desktop profiling tool, but PVRMonitor makes a quick on-device check much more convenient. 

The overlay is activated by dropping the PVRMonitor actor onto the scene. As a default, the overlay will display graphs for FPS, GPU clock speed, renderer active, and tiler active. The overlay is user-configurable from the overlay itself, and from within Unreal Engine. This allows any combination of desired graphs. 

Aside from rendering the overlay, all processing for this plug-in is performed on CPU, so GPU performance will not be noticeably impacted.

It is possible to create your own visualiser using the source code for PVRMonitor, as it is entirely open source.

For more information, see our website: https://www.imgtec.com/developers/powervr-sdk-tools/pvrmonitor/
