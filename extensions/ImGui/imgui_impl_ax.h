#pragma once
#include "imgui.h"

struct GLFWwindow;

typedef void (*ImGuiImplCocos2dxLoadFontFun)(void* userdata);

/// ImGui glfw APIs
IMGUI_IMPL_API bool ImGui_ImplGlfw_InitForAxys(GLFWwindow* window, bool install_callbacks);
IMGUI_IMPL_API void ImGui_ImplGlfw_Shutdown();
IMGUI_IMPL_API void ImGui_ImplGlfw_NewFrame();

/// ImGui axys render APIs
IMGUI_IMPL_API void ImGui_ImplAx_Init();
IMGUI_IMPL_API void ImGui_ImplAx_Shutdown();
IMGUI_IMPL_API void ImGui_ImplAx_NewFrame();
IMGUI_IMPL_API void ImGui_ImplAx_RenderDrawData(ImDrawData* draw_data);
IMGUI_IMPL_API void ImGui_ImplAx_RenderPlatform();

// Get FontTexture object ax::Texture2D*
IMGUI_IMPL_API void ImGui_ImplAx_SetCustomFontLoader(ImGuiImplCocos2dxLoadFontFun fun, void* userdata);
IMGUI_IMPL_API void* ImGui_ImplAx_GetFontsTexture();

// Sets Device objects dirty
IMGUI_IMPL_API void ImGui_ImplAx_SetDeviceObjectsDirty();
