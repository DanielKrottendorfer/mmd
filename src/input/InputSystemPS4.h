#pragma once

#include "InputSystemAPI.h"
#include "GamepadInputTypes.h"
#include <cstdint>

/*
 * The implementation of the InputSystem is up to you. It has to work on both platforms, PS4 and PC,
 * without having to provide anything else to the provided API methods below. You can decide how
 * initialization and shutdown of the InputSystems works, but make sure to release all resources
 * properly at the end of it's lifetime.
 */

class InputSystemPS4
{
public:
	/*
	 * Queries the state of the provided button and checks if the provided action was done
	 *
	 * BUTTON_HOLD - returns true as long as the button is done, otherwise false
	 * BUTTON_PRESSED - returns true when the button was pressed, otherwise false
	 * BUTTON_RELEASED - returns true when the button was release, otherwise false
	 *
	 */
	bool QueryGamepadButtonState(Input::GamepadButtons button, Input::InputAction action) {
	};

	/*
	 * Queries whether a gamepad is currently connected or not
	 * Note: normally this would take a handle or ID for the gamepad, but in
	 * this assignment, we assume there's only * one * gamepad at a time
	 */
	bool IsGamepadConnected();

	/*
	 * Update the internals of the input system (poll gamepads, update states, ...)
	 * For now, this will be called once per frame in the main loop
	 */
	void Update();

	/*
	 * Applies a vibration effect to the gamepad by letting a user provide a value (could come from a curve asset for
	 * gameplay effects for example)
	 */
	void ApplyVibrationEffect(uint32_t motorSpeed);

};


typedef InputSystemBase<InputSystemPS4> InputSystem;