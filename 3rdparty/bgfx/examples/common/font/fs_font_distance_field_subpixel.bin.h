static const uint8_t fs_font_distance_field_subpixel_glsl[1268] =
{
	0x46, 0x53, 0x48, 0x03, 0x01, 0x83, 0xf2, 0xe1, 0x01, 0x00, 0x0a, 0x75, 0x5f, 0x74, 0x65, 0x78, // FSH........u_tex
	0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0xd4, 0x04, 0x00, 0x00, 0x76, // Color..........v
	0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, // arying highp vec
	0x34, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, // 4 v_color0;.vary
	0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, // ing highp vec4 v
	0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, // _texcoord0;.unif
	0x6f, 0x72, 0x6d, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, // orm lowp sampler
	0x43, 0x75, 0x62, 0x65, 0x20, 0x75, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, // Cube u_texColor;
	0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, // .void main ().{.
	0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x69, 0x6e, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, //   highp int tmpv
	0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, // ar_1;.  tmpvar_1
	0x20, 0x3d, 0x20, 0x69, 0x6e, 0x74, 0x28, 0x28, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, //  = int(((v_texco
	0x6f, 0x72, 0x64, 0x30, 0x2e, 0x77, 0x20, 0x2a, 0x20, 0x34, 0x2e, 0x30, 0x29, 0x20, 0x2b, 0x20, // ord0.w * 4.0) + 
	0x30, 0x2e, 0x35, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, // 0.5));.  highp v
	0x65, 0x63, 0x33, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, // ec3 tmpvar_2;.  
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x20, 0x3d, 0x20, 0x64, 0x46, 0x64, 0x78, 0x28, // tmpvar_2 = dFdx(
	0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x79, 0x7a, 0x29, // v_texcoord0.xyz)
	0x3b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x74, // ;.  highp vec3 t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // mpvar_3;.  tmpva
	0x72, 0x5f, 0x33, 0x20, 0x3d, 0x20, 0x64, 0x46, 0x64, 0x79, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, // r_3 = dFdy(v_tex
	0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x68, // coord0.xyz);.  h
	0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // ighp vec3 tmpvar
	0x5f, 0x34, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x20, 0x3d, // _4;.  tmpvar_4 =
	0x20, 0x28, 0x30, 0x2e, 0x31, 0x36, 0x36, 0x36, 0x36, 0x37, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, //  (0.166667 * tmp
	0x76, 0x61, 0x72, 0x5f, 0x32, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x66, // var_2);.  lowp f
	0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x3b, 0x0a, 0x20, // loat tmpvar_5;. 
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x20, 0x3d, 0x20, 0x74, 0x65, 0x78, 0x74, //  tmpvar_5 = text
	0x75, 0x72, 0x65, 0x43, 0x75, 0x62, 0x65, 0x20, 0x28, 0x75, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, // ureCube (u_texCo
	0x6c, 0x6f, 0x72, 0x2c, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, // lor, (v_texcoord
	0x30, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, // 0.xyz - tmpvar_4
	0x29, 0x29, 0x2e, 0x7a, 0x79, 0x78, 0x77, 0x5b, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, // )).zyxw[tmpvar_1
	0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, // ];.  lowp float 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, // tmpvar_6;.  tmpv
	0x61, 0x72, 0x5f, 0x36, 0x20, 0x3d, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x43, 0x75, // ar_6 = textureCu
	0x62, 0x65, 0x20, 0x28, 0x75, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2c, 0x20, // be (u_texColor, 
	0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x79, 0x7a, // (v_texcoord0.xyz
	0x20, 0x2b, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x29, 0x29, 0x2e, 0x7a, 0x79, //  + tmpvar_4)).zy
	0x78, 0x77, 0x5b, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x5d, 0x3b, 0x0a, 0x20, 0x20, // xw[tmpvar_1];.  
	0x6c, 0x6f, 0x77, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // lowp float tmpva
	0x72, 0x5f, 0x37, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x20, // r_7;.  tmpvar_7 
	0x3d, 0x20, 0x28, 0x30, 0x2e, 0x35, 0x20, 0x2a, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // = (0.5 * (tmpvar
	0x5f, 0x35, 0x20, 0x2b, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x29, 0x29, 0x3b, // _5 + tmpvar_6));
	0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, // .  highp float t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // mpvar_8;.  tmpva
	0x72, 0x5f, 0x38, 0x20, 0x3d, 0x20, 0x28, 0x38, 0x2e, 0x30, 0x20, 0x2a, 0x20, 0x28, 0x73, 0x71, // r_8 = (8.0 * (sq
	0x72, 0x74, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x64, 0x6f, 0x74, 0x20, 0x28, 0x74, 0x6d, 0x70, // rt(.    dot (tmp
	0x76, 0x61, 0x72, 0x5f, 0x32, 0x2c, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x29, // var_2, tmpvar_2)
	0x0a, 0x20, 0x20, 0x29, 0x20, 0x2b, 0x20, 0x73, 0x71, 0x72, 0x74, 0x28, 0x0a, 0x20, 0x20, 0x20, // .  ) + sqrt(.   
	0x20, 0x64, 0x6f, 0x74, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x2c, 0x20, //  dot (tmpvar_3, 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x29, 0x0a, 0x20, 0x20, 0x29, 0x29, 0x29, 0x3b, // tmpvar_3).  )));
	0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x74, 0x6d, 0x70, // .  lowp vec3 tmp
	0x76, 0x61, 0x72, 0x5f, 0x39, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // var_9;.  tmpvar_
	0x39, 0x2e, 0x78, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x3b, 0x0a, // 9.x = tmpvar_5;.
	0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x39, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x74, //   tmpvar_9.y = t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // mpvar_7;.  tmpva
	0x72, 0x5f, 0x39, 0x2e, 0x7a, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, // r_9.z = tmpvar_6
	0x3b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x74, 0x6d, // ;.  lowp vec3 tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, // pvar_10;.  highp
	0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x65, 0x64, 0x67, 0x65, 0x30, 0x5f, 0x31, 0x31, 0x3b, //  float edge0_11;
	0x0a, 0x20, 0x20, 0x65, 0x64, 0x67, 0x65, 0x30, 0x5f, 0x31, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x30, // .  edge0_11 = (0
	0x2e, 0x35, 0x20, 0x2d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, 0x29, 0x3b, 0x0a, // .5 - tmpvar_8);.
	0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x74, 0x6d, 0x70, 0x76, //   lowp vec3 tmpv
	0x61, 0x72, 0x5f, 0x31, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // ar_12;.  tmpvar_
	0x31, 0x32, 0x20, 0x3d, 0x20, 0x63, 0x6c, 0x61, 0x6d, 0x70, 0x20, 0x28, 0x28, 0x28, 0x74, 0x6d, // 12 = clamp (((tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x39, 0x20, 0x2d, 0x20, 0x65, 0x64, 0x67, 0x65, 0x30, 0x5f, 0x31, // pvar_9 - edge0_1
	0x31, 0x29, 0x20, 0x2f, 0x20, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x28, 0x30, 0x2e, 0x35, 0x20, // 1) / (.    (0.5 
	0x2b, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x2d, // + tmpvar_8).   -
	0x20, 0x65, 0x64, 0x67, 0x65, 0x30, 0x5f, 0x31, 0x31, 0x29, 0x29, 0x2c, 0x20, 0x30, 0x2e, 0x30, //  edge0_11)), 0.0
	0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // , 1.0);.  tmpvar
	0x5f, 0x31, 0x30, 0x20, 0x3d, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x32, // _10 = (tmpvar_12
	0x20, 0x2a, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x32, 0x20, 0x2a, 0x20, //  * (tmpvar_12 * 
	0x28, 0x33, 0x2e, 0x30, 0x20, 0x2d, 0x20, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x28, 0x32, 0x2e, 0x30, // (3.0 - .    (2.0
	0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x32, 0x29, 0x0a, 0x20, 0x20, //  * tmpvar_12).  
	0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, // )));.  gl_FragCo
	0x6c, 0x6f, 0x72, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, // lor.xyz = (tmpva
	0x72, 0x5f, 0x31, 0x30, 0x20, 0x2a, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x2e, // r_10 * v_color0.
	0x77, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, // w);.  gl_FragCol
	0x6f, 0x72, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, // or.w = (tmpvar_7
	0x20, 0x2a, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x2e, 0x77, 0x29, 0x3b, 0x0a, //  * v_color0.w);.
	0x7d, 0x0a, 0x0a, 0x00,                                                                         // }...
};
static const uint8_t fs_font_distance_field_subpixel_dx9[885] =
{
	0x46, 0x53, 0x48, 0x03, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x68, 0x03, 0x00, 0x03, 0xff, 0xff, // FSH.......h.....
	0xfe, 0xff, 0x22, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, 0x00, 0x00, 0x00, 0x53, 0x00, 0x00, 0x00, // ..".CTAB....S...
	0x00, 0x03, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x81, 0x00, 0x00, // ................
	0x4c, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, // L...0...........
	0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, // <.......u_texCol
	0x6f, 0x72, 0x00, 0xab, 0x04, 0x00, 0x0e, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, // or..............
	0x00, 0x00, 0x00, 0x00, 0x70, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, 0x72, 0x6f, // ....ps_3_0.Micro
	0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, 0x68, // soft (R) HLSL Sh
	0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x39, 0x2e, // ader Compiler 9.
	0x32, 0x39, 0x2e, 0x39, 0x35, 0x32, 0x2e, 0x33, 0x31, 0x31, 0x31, 0x00, 0x51, 0x00, 0x00, 0x05, // 29.952.3111.Q...
	0x00, 0x00, 0x0f, 0xa0, 0x00, 0x00, 0x80, 0x40, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, // .......@...?....
	0x00, 0x00, 0x80, 0x3f, 0x51, 0x00, 0x00, 0x05, 0x01, 0x00, 0x0f, 0xa0, 0x00, 0x00, 0x00, 0x80, // ...?Q...........
	0x00, 0x00, 0x80, 0xbf, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x40, 0xc0, 0x51, 0x00, 0x00, 0x05, // ..........@.Q...
	0x02, 0x00, 0x0f, 0xa0, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, // ..........@@....
	0x00, 0x00, 0x00, 0x00, 0x51, 0x00, 0x00, 0x05, 0x03, 0x00, 0x0f, 0xa0, 0xc1, 0xaa, 0x2a, 0x3e, // ....Q.........*>
	0x00, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x02, // ...A...?........
	0x0a, 0x00, 0x00, 0x80, 0x00, 0x00, 0x08, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x00, 0x80, // ................
	0x01, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x98, 0x00, 0x08, 0x0f, 0xa0, // ................
	0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x01, 0x80, 0x01, 0x00, 0xff, 0x90, 0x00, 0x00, 0x00, 0xa0, // ................
	0x00, 0x00, 0x55, 0xa0, 0x13, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x00, 0x80, // ..U.............
	0x58, 0x00, 0x00, 0x04, 0x00, 0x00, 0x04, 0x80, 0x00, 0x00, 0x55, 0x81, 0x00, 0x00, 0xaa, 0xa0, // X.........U.....
	0x00, 0x00, 0xff, 0xa0, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x00, 0x80, // ................
	0x00, 0x00, 0x55, 0x81, 0x58, 0x00, 0x00, 0x04, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, // ..U.X...........
	0x00, 0x00, 0xaa, 0xa0, 0x00, 0x00, 0xaa, 0x80, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x80, // ................
	0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x55, 0x80, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, 0x80, // ......U.........
	0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0xe4, 0xa0, 0x58, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, // ........X.......
	0x00, 0x00, 0xe4, 0x8c, 0x00, 0x00, 0xff, 0xa0, 0x00, 0x00, 0xaa, 0xa0, 0x5b, 0x00, 0x00, 0x02, // ............[...
	0x01, 0x00, 0x07, 0x80, 0x01, 0x00, 0xe4, 0x90, 0x04, 0x00, 0x00, 0x04, 0x02, 0x00, 0x07, 0x80, // ................
	0x01, 0x00, 0xe4, 0x80, 0x03, 0x00, 0x00, 0xa1, 0x01, 0x00, 0xe4, 0x90, 0x42, 0x00, 0x00, 0x03, // ............B...
	0x02, 0x00, 0x0f, 0x80, 0x02, 0x00, 0xe4, 0x80, 0x00, 0x08, 0xe4, 0xa0, 0x09, 0x00, 0x00, 0x03, // ................
	0x02, 0x00, 0x01, 0x80, 0x02, 0x00, 0xc6, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x04, 0x00, 0x00, 0x04, // ................
	0x03, 0x00, 0x07, 0x80, 0x01, 0x00, 0xe4, 0x80, 0x03, 0x00, 0x00, 0xa0, 0x01, 0x00, 0xe4, 0x90, // ................
	0x08, 0x00, 0x00, 0x03, 0x01, 0x00, 0x01, 0x80, 0x01, 0x00, 0xe4, 0x80, 0x01, 0x00, 0xe4, 0x80, // ................
	0x07, 0x00, 0x00, 0x02, 0x01, 0x00, 0x01, 0x80, 0x01, 0x00, 0x00, 0x80, 0x06, 0x00, 0x00, 0x02, // ................
	0x01, 0x00, 0x01, 0x80, 0x01, 0x00, 0x00, 0x80, 0x42, 0x00, 0x00, 0x03, 0x03, 0x00, 0x0f, 0x80, // ........B.......
	0x03, 0x00, 0xe4, 0x80, 0x00, 0x08, 0xe4, 0xa0, 0x09, 0x00, 0x00, 0x03, 0x02, 0x00, 0x04, 0x80, // ................
	0x03, 0x00, 0xc6, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x80, // ................
	0x02, 0x00, 0xaa, 0x80, 0x02, 0x00, 0x00, 0x80, 0x05, 0x00, 0x00, 0x03, 0x02, 0x00, 0x02, 0x80, // ................
	0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x55, 0xa0, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x07, 0x80, // ......U.........
	0x01, 0x00, 0xe4, 0x91, 0x5c, 0x00, 0x00, 0x02, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0xe4, 0x80, // ................
	0x08, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x00, 0x00, 0xe4, 0x80, // ................
	0x07, 0x00, 0x00, 0x02, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x06, 0x00, 0x00, 0x02, // ................
	0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x80, // ................
	0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x80, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x02, 0x80, // ................
	0x00, 0x00, 0x00, 0x80, 0x03, 0x00, 0x55, 0xa1, 0x03, 0x00, 0xaa, 0xa0, 0x04, 0x00, 0x00, 0x04, // ......U.........
	0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x03, 0x00, 0x55, 0xa0, 0x03, 0x00, 0xaa, 0xa0, // ..........U.....
	0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x55, 0x81, 0x00, 0x00, 0x00, 0x80, // ..........U.....
	0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0e, 0x80, 0x00, 0x00, 0x55, 0x81, 0x02, 0x00, 0x90, 0x80, // ..........U.....
	0x05, 0x00, 0x00, 0x03, 0x00, 0x08, 0x08, 0x80, 0x02, 0x00, 0x55, 0x80, 0x00, 0x00, 0xff, 0x90, // ..........U.....
	0x06, 0x00, 0x00, 0x02, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x05, 0x00, 0x00, 0x03, // ................
	0x00, 0x00, 0x17, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0xf9, 0x80, 0x04, 0x00, 0x00, 0x04, // ................
	0x01, 0x00, 0x07, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x02, 0x00, 0x00, 0xa0, 0x02, 0x00, 0x55, 0xa0, // ..............U.
	0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x00, 0x00, 0xe4, 0x80, // ................
	0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x01, 0x00, 0xe4, 0x80, // ................
	0x05, 0x00, 0x00, 0x03, 0x00, 0x08, 0x07, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x00, 0x00, 0xff, 0x90, // ................
	0xff, 0xff, 0x00, 0x00, 0x00,                                                                   // .....
};
static const uint8_t fs_font_distance_field_subpixel_dx11[1288] =
{
	0x46, 0x53, 0x48, 0x03, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0xf8, 0x04, 0x44, 0x58, 0x42, 0x43, // FSH.........DXBC
	0x72, 0x17, 0x00, 0xad, 0x3a, 0xed, 0x4a, 0x16, 0x14, 0x58, 0xdb, 0x06, 0xdf, 0x01, 0x0f, 0x39, // r...:.J..X.....9
	0x01, 0x00, 0x00, 0x00, 0xf8, 0x04, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, // ............,...
	0xa0, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0x6c, 0x00, 0x00, 0x00, // ........ISGNl...
	0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........P.......
	0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, // ................
	0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // ................
	0x01, 0x00, 0x00, 0x00, 0x0f, 0x08, 0x00, 0x00, 0x62, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........b.......
	0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x00, 0x00, // ................
	0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x43, 0x4f, 0x4c, 0x4f, // SV_POSITION.COLO
	0x52, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab, 0x4f, 0x53, 0x47, 0x4e, // R.TEXCOORD..OSGN
	0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, // ,........... ...
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x41, 0x52, 0x47, 0x45, 0x54, 0x00, 0xab, 0xab, // ....SV_TARGET...
	0x53, 0x48, 0x44, 0x52, 0x1c, 0x04, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x07, 0x01, 0x00, 0x00, // SHDR....@.......
	0x35, 0x18, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x00, 0x00, // 5..........?....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, // ...............?
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ...?............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x5a, 0x00, 0x00, 0x03, 0x00, 0x60, 0x10, 0x00, // .......?Z....`..
	0x00, 0x00, 0x00, 0x00, 0x58, 0x30, 0x00, 0x04, 0x00, 0x70, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ....X0...p......
	0x55, 0x55, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0x82, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, // UU..b...........
	0x62, 0x10, 0x00, 0x03, 0xf2, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, // b...........e...
	0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x03, 0x00, 0x00, 0x00, // . ......h.......
	0x32, 0x00, 0x00, 0x09, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x10, 0x10, 0x00, // 2...........:...
	0x02, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x01, 0x40, 0x00, 0x00, // .....@.....@.@..
	0x00, 0x00, 0x00, 0x3f, 0x1b, 0x00, 0x00, 0x05, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ...?............
	0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x05, 0xe2, 0x00, 0x10, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x06, 0x19, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0d, // ............2...
	0x72, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x96, 0x07, 0x10, 0x80, 0x41, 0x00, 0x00, 0x00, // r...........A...
	0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0xc1, 0xaa, 0x2a, 0x3e, 0xc1, 0xaa, 0x2a, 0x3e, // .....@....*>..*>
	0xc1, 0xaa, 0x2a, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x46, 0x12, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, // ..*>....F.......
	0x45, 0x00, 0x00, 0x09, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, // E...........F...
	0x01, 0x00, 0x00, 0x00, 0x46, 0x7e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, // ....F~.......`..
	0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x08, 0x12, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, // ................
	0x66, 0x0c, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x9e, 0x90, 0x00, 0x0a, 0x00, 0x10, 0x00, // f.......F.......
	0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0c, 0x72, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, // ....2...r.......
	0x96, 0x07, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0xc1, 0xaa, 0x2a, 0x3e, // .........@....*>
	0xc1, 0xaa, 0x2a, 0x3e, 0xc1, 0xaa, 0x2a, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x46, 0x12, 0x10, 0x00, // ..*>..*>....F...
	0x02, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x07, 0x22, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ........".......
	0x96, 0x07, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x96, 0x07, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x45, 0x00, 0x00, 0x09, 0xf2, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, // E...........F...
	0x02, 0x00, 0x00, 0x00, 0x46, 0x7e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, // ....F~.......`..
	0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x08, 0x42, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, // ........B.......
	0x66, 0x0c, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x9e, 0x90, 0x00, 0x0a, 0x00, 0x10, 0x00, // f.......F.......
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x2a, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, // *...............
	0x38, 0x00, 0x00, 0x07, 0x22, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, // 8..."...........
	0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x36, 0x00, 0x00, 0x06, // .....@.....?6...
	0xd2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x19, 0x10, 0x80, 0x41, 0x00, 0x00, 0x00, // ............A...
	0x02, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x05, 0xd2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x06, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x07, 0x12, 0x00, 0x10, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x86, 0x03, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x03, 0x10, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0x05, 0x32, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ....K...2.......
	0x46, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x12, 0x00, 0x10, 0x00, // F...............
	0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x10, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0x22, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ....2...".......
	0x0a, 0x00, 0x10, 0x80, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, // ....A........@..
	0x00, 0x00, 0x00, 0x41, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x32, 0x00, 0x00, 0x09, // ...A.@.....?2...
	0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, // .@.....A.@.....?
	0x00, 0x00, 0x00, 0x08, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x10, 0x80, // ................
	0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // A...............
	0x00, 0x00, 0x00, 0x08, 0xe2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x56, 0x05, 0x10, 0x80, // ............V...
	0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x09, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, // A...............
	0x38, 0x00, 0x00, 0x07, 0x82, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x10, 0x00, // 8.... ..........
	0x01, 0x00, 0x00, 0x00, 0x3a, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x0a, // ....:...........
	0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, // .........@.....?
	0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x80, 0x3f, 0x0a, 0x00, 0x10, 0x00, // ...?...?...?....
	0x00, 0x00, 0x00, 0x00, 0x38, 0x20, 0x00, 0x07, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ....8 ..r.......
	0x06, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x96, 0x07, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x32, 0x00, 0x00, 0x0f, 0x72, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, // 2...r.......F...
	0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0xc0, // .....@..........
	0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, // .........@....@@
	0x00, 0x00, 0x40, 0x40, 0x00, 0x00, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x07, // ..@@..@@....8...
	0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // r.......F.......
	0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x07, 0x72, 0x00, 0x10, 0x00, // F.......8...r...
	0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, // ....F.......F...
	0x01, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x07, 0x72, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ....8...r ......
	0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf6, 0x1f, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, // F...............
	0x3e, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,                                                 // >.......
};
