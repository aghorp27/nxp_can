1. Example Description
    This application demonstrates the usage of the Mcu Driver.
    The application includes an EB Tresos project that configures the Base, Dem, Mcu, Platform and Resource drivers.
    1.1 The aplication software functionality
            - Mcu_Init, Mcu_InitClock, Mcu_DistributePllClock, Mcu_SetMode
                Initialize the clock sources, the clock tree and configure the clock gating of peripheral
                Initialize two clock configurations with different XBAR_CLK frequency: McuClockSettingConfig_0 with XBAR_CLK = 24Mhz and McuClockSettingConfig_1 with XBAR_CLK = 400Mhz.
                Using Mcu_GetClockFrequency to check the frequency of XBAR_CLK after init clock.
2. Installation steps
    2.1 Hardware installation
        2.1.1 Supported boards
            - Daughter card: X-S32R45-PROC-S PCB RevB RevX5 SCH RevB1
            - Motherboard: S32GRV-PLATEVB PCB RevA SCH RevB
            - Silicon: PS32R458AAMUD 0P57D SBAU2141A
        2.1.2 Connections
            - Powered board through power Adapter 12V
        2.1.3 Debugger
            The Lauterbach debugger must be connected to J190 JTAG Cortex Debug connector.
    2.2 Software installation
        2.2.1 Tresos Project Installation
            The following procedure requires that the user has EB Tresos Studio installed and it is only needed for viewing, updating and generating the driver's configuration.
            Procedure:
                1. Make sure that all RTD plugins are already installed in the Tresos Studio plugins directory
                2. Open Tresos Studio
                3. Import example application project
                    a. Click on "File" and select "Import"
                    b. Select "Existing Projects into Workspace" and click on "Next" button
                    c. Select "Select root directory" and click on "Browse"
                    d. Select the location of the [project] folder in the installed example application package folder
                    e. Optional* - Select "Copy projects into workspace" 
                    f. Click on "Finish" button
        2.2.2 Example configuration
            The following procedure requires that the user has EB Tresos Studio installed and the toolchains versions specified in the Release Notes.
            The toolchain that will be used needs to be installed for correct operation and the path to the installation location shall be added into the system environment variable(s):
            - TRESOS_DIR the installation path of Electrobit Tresos (used for generating the project from command line)
                Ex: TRESOS_DIR = C:/EB/tresos27
            - GCC_DIR The path to the GCC instalation dir
                Ex: GCC_DIR = C:/NXP/S32DS.3.4/S32DS/build_tools/gcc_v9.2/gcc-9.2-arm32-eabi
            - PLUGINS_DIR The path to the Tresos plugins directory
                Ex: PLUGINS_DIR = C:/EB/tresos27/plugins
            Procedure:
                1. Open project_parameters.mk file in a text editor and update the variables mentioned above with the correct paths
3. Building the example application
    3.1 Compiling the application
        Procedure:
            1. Open the Windows command prompt window
            2. Change the current directory to the example application folder
            3. To build the example, execute the following command to build: make build
            4. The object files and linker output file (main.elf) shall be generated in the /out subdirectory
    3.2 Running the application on the board
        To execute the example application load the executable file to the evaluation board using the Lauterbach debugger and the device.cmm script.
    3.3 Modifying the configuration in Tresos and generating the code
        Users may change the application configuration according to their needs.
        Procedure:
            1. Open the EB Tresos Studio GUI
            2. Open previously imported Example Application project
            3. Use the Tresos Studio GUI to modify configuration parameter values and save the changes.
            4. Select the Example Application project and click on "Generate" button to generate the configuration files.
