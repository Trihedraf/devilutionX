#pragma once

#include <cstdint>

namespace devilution {

[[nodiscard]] constexpr bool IsClxOpaque(uint8_t control)
{
	constexpr uint8_t ClxOpaqueMin = 0x80;
	return control >= ClxOpaqueMin;
}

[[nodiscard]] constexpr uint8_t GetClxOpaquePixelsWidth(uint8_t control)
{
	return -static_cast<int8_t>(control);
}

[[nodiscard]] constexpr bool IsClxOpaqueFill(uint8_t control)
{
	constexpr uint8_t ClxFillMax = 0xBE;
	return control <= ClxFillMax;
}

[[nodiscard]] constexpr uint8_t GetClxOpaqueFillWidth(uint8_t control)
{
	constexpr uint8_t ClxFillEnd = 0xBF;
	return ClxFillEnd - control;
}

} // namespace devilution
