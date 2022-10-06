#include <sceerror.h>
#include "Controller.h"

Controller::Controller()
{
	sceUserServiceInitialize(NULL);
	scePadInit();

	int ret;
	int32_t handle;

	SceUserServiceUserId userId;
	// Get user ID value
	ret = sceUserServiceGetInitialUser(&userId);
	if (ret < 0)
	{
		printf("[Daniel] Failed to obtain user ID value %#010x \n", ret);
		/* Failed to obtain user ID value */
		return;
	}

	// Example that specifies SCE_PAD_PORT_TYPE_STANDARD to type
	// Specify 0 for index
	// pParam is a reserved area (specify NULL)
	handle = scePadOpen(userId, SCE_PAD_PORT_TYPE_STANDARD, 0, NULL);
	if (handle < 0)
	{
		printf("[Daniel] Setting failed %#010x \n", handle);
		/* Setting failed */
	}
	ScePadData data[8];

	// Obtain state of controller data
	ret = scePadReadState(handle, data);

	if (ret == SCE_OK)
	{
		printf("[Daniel] Data was successfully obtained \n");
	}
	
	
	// Specify the start address of the buffer for obtaining data history to pData
	// Specify the number of the specified buffers to num

	while (ret == SCE_OK) {

		ret = scePadRead(handle, data, sizeof(data) / sizeof(ScePadData));

		if (ret > 0) {
			auto b = data->buttons;
			printf("[Daniel] Data was successfully obtained %#010x \n", b);
			break;
		}
	}
}

Controller::~Controller() {}