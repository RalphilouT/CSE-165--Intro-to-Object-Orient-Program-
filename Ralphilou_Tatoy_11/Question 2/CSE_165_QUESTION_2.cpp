Linux
================================================================================

By default SDL will only link against glibc, the rest of the features will be
enabled dynamically at runtime depending on the available features on the target
system. So, for example if you built SDL with Xinerama support and the target
system does not have the Xinerama libraries installed, it will be disabled
at runtime, and you won't get a missing library error, at least with the 
default configuration parameters.


Build Dependencies
--------------------------------------------------------------------------------
    
Ubuntu 20.04, all available features enabled:

    sudo apt-get install build-essential git make