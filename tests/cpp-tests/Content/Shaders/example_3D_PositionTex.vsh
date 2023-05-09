attribute vec4 a_position;
attribute vec2 a_texCoord;

varying vec2 TextureCoordOut;

uniform mat4 u_MVPMatrix;

void main(void)
{
    gl_Position = u_MVPMatrix * a_position;
    TextureCoordOut = a_texCoord;
    TextureCoordOut.y = 1.0 - TextureCoordOut.y;
}
