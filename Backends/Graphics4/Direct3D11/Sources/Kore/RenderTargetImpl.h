#pragma once

#ifdef __cplusplus
extern "C" {
#endif

struct ID3D11Texture2D;
struct ID3D11RenderTargetView;
struct ID3D11DepthStencilView;
struct ID3D11ShaderResourceView;

typedef struct {
	struct ID3D11Texture2D *textureRender;
	struct ID3D11Texture2D *textureSample;
	struct ID3D11RenderTargetView *renderTargetViewRender[6];
	struct ID3D11RenderTargetView *renderTargetViewSample[6];
	struct ID3D11Texture2D *depthStencil;
	struct ID3D11DepthStencilView *depthStencilView[6];
	struct ID3D11ShaderResourceView *renderTargetSRV;
	struct ID3D11ShaderResourceView *depthStencilSRV;
	int format;
} Kinc_G4_RenderTargetImpl;

#ifdef __cplusplus
}
#endif
