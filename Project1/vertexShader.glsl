#version 420

//uniform mat4 MVP;
uniform mat4 matModel;		// "m"
uniform mat4 matView;		// "v"
uniform mat4 matProj;		// "p"
uniform mat4 matModelInvTrans;


in vec4 vCol;	
in vec4 vPos;		// was vec2 
in vec4 vNormal;

out vec4 fColour;		
out vec4 fNormal;
out vec4 fVertWorldLocation;

void main()
{
	// mvp = p * v * m; 
	mat4 MVP = matProj * matView * matModel;
	vec4 curVertex = vPos;
							 	
    gl_Position = MVP * curVertex;
	
	fVertWorldLocation = matModel * curVertex;
	
	fNormal = matModelInvTrans * vNormal;
	
    fColour = vCol;
}



