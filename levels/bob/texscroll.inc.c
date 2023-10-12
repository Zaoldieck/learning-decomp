void scroll_bob_dl_BOB_Visual_New__SU_2017__mesh_layer_4_vtx_1() {
	int i = 0;
	int count = 2703;
	int width = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(bob_dl_BOB_Visual_New__SU_2017__mesh_layer_4_vtx_1);

	deltaX = (int)(1.5 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_bob() {
	scroll_bob_dl_BOB_Visual_New__SU_2017__mesh_layer_4_vtx_1();
}
