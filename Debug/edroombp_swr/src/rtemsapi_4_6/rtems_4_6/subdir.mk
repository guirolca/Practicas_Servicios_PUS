################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../edroombp_swr/src/rtemsapi_4_6/rtems_4_6/edroombp.cpp 

OBJS += \
./edroombp_swr/src/rtemsapi_4_6/rtems_4_6/edroombp.o 

CPP_DEPS += \
./edroombp_swr/src/rtemsapi_4_6/rtems_4_6/edroombp.d 


# Each subdirectory must supply rules for building sources it contributes
edroombp_swr/src/rtemsapi_4_6/rtems_4_6/%.o: ../edroombp_swr/src/rtemsapi_4_6/rtems_4_6/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: SPARC RTEMS C++ Compiler'
	sparc-rtems-g++ -I"/home/atcsol/workspace_SCTRSE/asw_pus_19_x_rtems_project_students/swinterfaces/icuasw_pus_services_iface_v1/include" -I"/home/atcsol/workspace_SCTRSE/asw_pus_19_x_rtems_project_students/swinterfaces/datapool_mng_iface_v1/include" -I"/home/atcsol/workspace_SCTRSE/asw_pus_19_x_rtems_project_students/swpackages/emu_sc_channel_drv_slib_head/include" -I"/home/atcsol/workspace_SCTRSE/asw_pus_19_x_rtems_project_students/dataclasses/CDSensorTMBufferStatus/include" -I"/home/atcsol/workspace_SCTRSE/asw_pus_19_x_rtems_project_students/swinterfaces/sc_channel_drv_iface_v1/include" -I"/home/atcsol/workspace_SCTRSE/asw_pus_19_x_rtems_project_students/swpackages/emu_sc_channel_drv_slib_head/include/emu_sc_channel_drv_slib" -I"/home/atcsol/workspace_SCTRSE/asw_pus_19_x_rtems_project_students/components/icuasw/include" -I"/home/atcsol/workspace_SCTRSE/asw_pus_19_x_rtems_project_students/dataclasses/CDEventList/include" -I"/home/atcsol/workspace_SCTRSE/asw_pus_19_x_rtems_project_students/dataclasses/CDRecovAction/include" -I"/home/atcsol/workspace_SCTRSE/asw_pus_19_x_rtems_project_students/dataclasses/CDTCDescriptor/include" -I"/home/atcsol/workspace_SCTRSE/asw_pus_19_x_rtems_project_students/dataclasses/CDTMList/include" -I"/home/atcsol/workspace_SCTRSE/asw_pus_19_x_rtems_project_students/dataclasses/CDTMMemory/include" -I/opt/rtems-4.6/sparc-rtems/leon3/lib/include -I"/home/atcsol/workspace_SCTRSE/asw_pus_19_x_rtems_project_students/components/ccbkgtcexec/include" -I"/home/atcsol/workspace_SCTRSE/asw_pus_19_x_rtems_project_students/components/ccepdmanager/include" -I"/home/atcsol/workspace_SCTRSE/asw_pus_19_x_rtems_project_students/components/cchk_fdirmng/include" -I"/home/atcsol/workspace_SCTRSE/asw_pus_19_x_rtems_project_students/components/cctm_channelctrl/include" -I"/home/atcsol/workspace_SCTRSE/asw_pus_19_x_rtems_project_students/config/include" -I"/home/atcsol/workspace_SCTRSE/asw_pus_19_x_rtems_project_students/edroom_glue/include" -I"/home/atcsol/workspace_SCTRSE/asw_pus_19_x_rtems_project_students/edroombp_swr/include" -I"/home/atcsol/workspace_SCTRSE/asw_pus_19_x_rtems_project_students/edroomsl_swr/include" -I"/home/atcsol/workspace_SCTRSE/asw_pus_19_x_rtems_project_students/edroomsl_types_swr/include" -I"/home/atcsol/workspace_SCTRSE/asw_pus_19_x_rtems_project_students/rtems_osswr/include" -O0 -g3 -Wall -msoft-float -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


