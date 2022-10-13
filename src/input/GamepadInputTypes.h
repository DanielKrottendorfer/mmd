#pragma once

namespace Input
{
	enum class GamepadButtons
	{
		FACE_BUTTON_TOP,
		FACE_BUTTON_DOWN,
		FACE_BUTTON_LEFT,
		FACE_BUTTON_RIGHT,

		DPAD_TOP,
		DPAD_DOWN,
		DPAD_LEFT,
		DPAD_RIGHT,

		SHOULDER_LEFT,
		SHOULDER_RIGHT,
	};
	inline GamepadButtons operator|(GamepadButtons a, GamepadButtons b)
	{
		return static_cast<GamepadButtons>(static_cast<int>(a) | static_cast<int>(b));
	}

	enum class InputAction
	{
		BUTTON_HOLD,
		BUTTON_PRESSED,
		BUTTON_RELEASED,
	};
	inline InputAction operator|(InputAction a, InputAction b)
	{
		return static_cast<InputAction>(static_cast<int>(a) | static_cast<int>(b));
	}

} // namespace Input
