#pragma once

class CheckCommandInputsHook
{
public:
    static void Enable();
    static bool Prepare();

private:
    static char OverrideFunc(int64_t a1, float* a2);
    static inline std::add_pointer_t<decltype(OverrideFunc)> OriginalFunc;
    static inline std::array<uintptr_t, 1> addresses;
    static inline bool all_found = false;
};
