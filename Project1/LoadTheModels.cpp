#include "globalStuff.h"
#include "cMeshObject.h"

#include <glm/glm.hpp>
#include <iostream>

// Here's the actual variable (the one and only)
std::vector< cMeshObject* > g_vecObjectsToDraw;

void LoadTheModelsIntoScene(unsigned int shaderProgID)
{
	sModelDrawInfo street;
	::g_pVAOManager->LoadModelIntoVAO("Street_environment2.ply",
		street,
		shaderProgID);

	cMeshObject* pStreet = new cMeshObject();
	pStreet->meshName = "Street_environment2.ply";
	//pStreet->friendlyName = "current";
	pStreet->pos = glm::vec3(0.0f, 0.0f, 0.0f);
	pStreet->scale = 0.5f;
	pStreet->orientation = glm::vec3(0.0f, 0.0f, 0.0f);
	pStreet->diffuseColour = glm::vec4(1.0f, 1.0f, 1.0f, 1.0f);
	::g_vecObjectsToDraw.push_back(pStreet);

	sModelDrawInfo apartment;
	::g_pVAOManager->LoadModelIntoVAO("Apartment Building_262.ply",
		apartment,
		shaderProgID);

	cMeshObject* pApartment = new cMeshObject();
	pApartment->meshName = "Apartment Building_262.ply";
	//pApartment->friendlyName = "current";
	pApartment->pos = glm::vec3(-23.4f, 0.0f, -1.7f);
	pApartment->scale = 0.0525f;
	pApartment->orientation = glm::vec3(0.0f, 0.0f, 0.0f);
	pApartment->diffuseColour = glm::vec4(1.0f, 1.0f, 1.0f, 1.0f);
	::g_vecObjectsToDraw.push_back(pApartment);

	sModelDrawInfo apartment2;
	::g_pVAOManager->LoadModelIntoVAO("Modern_Brick_House2.ply",
		apartment2,
		shaderProgID);

	cMeshObject* pApartment2 = new cMeshObject();
	pApartment2->meshName = "Modern_Brick_House2.ply";
	//pApartment2->friendlyName = "current";
	pApartment2->pos = glm::vec3(-29.8f, 0.0f, 49.4f);
	pApartment2->scale = 0.0525f;
	pApartment2->orientation = glm::vec3(0.0f, 0.0f, 0.0f);
	pApartment2->diffuseColour = glm::vec4(1.0f, 1.0f, 1.0f, 1.0f);
	::g_vecObjectsToDraw.push_back(pApartment2);

	sModelDrawInfo monster;
	::g_pVAOManager->LoadModelIntoVAO("dinosaur_mod2.ply",
		monster,
		shaderProgID);

	cMeshObject* pMonster = new cMeshObject();
	pMonster->meshName = "dinosaur_mod2.ply";
	//pMonster->friendlyName = "current";
	pMonster->pos = glm::vec3(-4.1f, 0.0f, -14.6f);
	pMonster->scale = 0.036f;
	pMonster->orientation = glm::vec3(0.0f, 0.0f, 0.0f);
	pMonster->diffuseColour = glm::vec4(0.13f, 0.55f, 0.13f, 1.0f);
	pMonster->specularColour = glm::vec4(0.0f, 0.0f, 0.0f, 1.0f);
	::g_vecObjectsToDraw.push_back(pMonster);

	cMeshObject* pMonster2 = new cMeshObject();
	pMonster2->meshName = "dinosaur_mod2.ply";
	//pMonster2->friendlyName = "current";
	pMonster2->pos = glm::vec3(2.2f, 0.0f, -18.6f);
	pMonster2->scale = 0.030f;
	pMonster2->orientation = glm::vec3(0.0f, glm::radians(45.0f), 0.0f);
	pMonster2->diffuseColour = glm::vec4(0.13f, 0.55f, 0.13f, 1.0f);
	pMonster2->specularColour = glm::vec4(0.0f, 0.0f, 0.0f, 1.0f);
	::g_vecObjectsToDraw.push_back(pMonster2);

	sModelDrawInfo heli;
	::g_pVAOManager->LoadModelIntoVAO("Mi-242.ply",
		heli,
		shaderProgID);

	cMeshObject* pHeli1 = new cMeshObject();
	pHeli1->meshName = "Mi-242.ply";
	//pHeli1->friendlyName = "current";
	pHeli1->pos = glm::vec3(4.1f, 8.5f, 14.6f);
	pHeli1->scale = 0.35f;
	pHeli1->orientation = glm::vec3(0.0f, glm::radians(180.0f), 0.0f);
	pHeli1->diffuseColour = glm::vec4(0.255f, 0.41f, 1.0f, 1.0f);
	pHeli1->specularColour = glm::vec4(0.0f, 0.0f, 0.0f, 1000.0f);
	::g_vecObjectsToDraw.push_back(pHeli1);

	cMeshObject* pHeli2 = new cMeshObject();
	pHeli2->meshName = "Mi-242.ply";
	//pHeli2->friendlyName = "current";
	pHeli2->pos = glm::vec3(-7.0f, 10.3f, 11.6f);
	pHeli2->scale = 0.35f;
	pHeli2->orientation = glm::vec3(0.0f, glm::radians(150.0f), 0.0f);
	pHeli2->diffuseColour = glm::vec4(0.255f, 0.41f, 1.0f, 1.0f);
	pHeli2->specularColour = glm::vec4(0.0f, 0.0f, 0.0f, 1000.0f);
	::g_vecObjectsToDraw.push_back(pHeli2);

	sModelDrawInfo car;
	::g_pVAOManager->LoadModelIntoVAO("MitsubishiLanser_mod2.ply",
		car,
		shaderProgID);

	cMeshObject* pCar1 = new cMeshObject();
	pCar1->meshName = "MitsubishiLanser_mod2.ply";
	//pCar1->friendlyName = "current";
	pCar1->pos = glm::vec3(-1.1f, 0.3f, -4.8f);
	pCar1->scale = 0.008f;
	pCar1->orientation = glm::vec3(0.0f, glm::radians(-90.0f), 0.0f);
	pCar1->diffuseColour = glm::vec4(235.0/255.0f, 44.0 / 255.0f, 44.0 / 255.0f, 1.0f);
	//pCar1->specularColour = glm::vec4(0.0f, 0.0f, 0.0f, 1.0f);
	::g_vecObjectsToDraw.push_back(pCar1);

	cMeshObject* pCar2 = new cMeshObject();
	pCar2->meshName = "MitsubishiLanser_mod2.ply";
	//pCar2->friendlyName = "current";
	pCar2->pos = glm::vec3(8.5f, 0.3f, -9.2f);
	pCar2->scale = 0.007f;
	pCar2->orientation = glm::vec3(0.0f, glm::radians(-30.0f), 0.0f);
	//pCar2->diffuseColour = glm::vec4(137/255.0f, 112 / 255.0f, 112 / 255.0f, 1.0f);
	pCar2->diffuseColour = glm::vec4(1.0f, 0.0f, 1.0f, 1.0f);
	//pCar2->specularColour = glm::vec4(0.0f, 0.0f, 0.0f, 1.0f);
	::g_vecObjectsToDraw.push_back(pCar2);

	cMeshObject* pCar3 = new cMeshObject();
	pCar3->meshName = "MitsubishiLanser_mod2.ply";
	//pCar3->friendlyName = "current";
	pCar3->pos = glm::vec3(12.8f, 0.3f, 1.6f);
	pCar3->scale = 0.007f;
	pCar3->orientation = glm::vec3(0.0f, glm::radians(0.0f), 0.0f);
	pCar3->diffuseColour = glm::vec4(1.0f, 0.5f, 0.2f, 1.0f);
	::g_vecObjectsToDraw.push_back(pCar3);

	cMeshObject* pCar4 = new cMeshObject();
	pCar4->meshName = "MitsubishiLanser_mod2.ply";
	//pCar4->friendlyName = "current";
	pCar4->pos = glm::vec3(0.3f, 0.3f, 25.6f);
	pCar4->scale = 0.007f;
	pCar4->orientation = glm::vec3(0.0f, glm::radians(-90.0f), 0.0f);
	pCar4->diffuseColour = glm::vec4(0.7f, 0.6f, 0.6f, 1.0f);
	::g_vecObjectsToDraw.push_back(pCar4);

	cMeshObject* pCar5 = new cMeshObject();
	pCar5->meshName = "MitsubishiLanser_mod2.ply";
	//pCar5->friendlyName = "current";
	pCar5->pos = glm::vec3(-8.7f, 0.3f, 5.4f);
	pCar5->scale = 0.007f;
	pCar5->orientation = glm::vec3(0.0f, glm::radians(-90.0f), 0.0f);
	pCar5->diffuseColour = glm::vec4(0.25f, 0.8f, 0.8f, 1.0f);
	::g_vecObjectsToDraw.push_back(pCar5);

	cMeshObject* pCar6 = new cMeshObject();
	pCar6->meshName = "MitsubishiLanser_mod2.ply";
	//pCar6->friendlyName = "current";
	pCar6->pos = glm::vec3(-8.1f, 2.8f, -32.0f);
	pCar6->scale = 0.009f;
	pCar6->orientation = glm::vec3(glm::radians(150.0f), glm::radians(-90.0f), 0.0f);
	pCar6->diffuseColour = glm::vec4(0.8f, 1.0f, 0.8f, 1.0f);
	::g_vecObjectsToDraw.push_back(pCar6);

	cMeshObject* pCar7 = new cMeshObject();
	pCar7->meshName = "MitsubishiLanser_mod2.ply";
	//pCar7->friendlyName = "current";
	pCar7->pos = glm::vec3(0.1f, 2.8f, -34.8f);
	pCar7->scale = 0.009f;
	pCar7->orientation = glm::vec3(glm::radians(60.0f), glm::radians(-60.0f), 0.0f);
	pCar7->diffuseColour = glm::vec4(0.9f, 0.5f, 0.5f, 1.0f);
	::g_vecObjectsToDraw.push_back(pCar7);

	sModelDrawInfo streetlamp;
	::g_pVAOManager->LoadModelIntoVAO("Street Lamp.ply",
		streetlamp,
		shaderProgID);

	cMeshObject* pStreetLamp3 = new cMeshObject();
	pStreetLamp3->meshName = "Street Lamp.ply";
	pStreetLamp3->friendlyName = "current";
	pStreetLamp3->pos = glm::vec3(-14.1f, 0.3f, 40.7f);
	pStreetLamp3->scale = 0.007f;
	pStreetLamp3->orientation = glm::vec3(0.0f, glm::radians(0.0f), 0.0f);
	pStreetLamp3->diffuseColour = glm::vec4(74.0 / 255.0f, 64.0 / 255.0f, 64.0 / 255.0f, 1.0f);
	//pCar1->specularColour = glm::vec4(0.0f, 0.0f, 0.0f, 1.0f);
	::g_vecObjectsToDraw.push_back(pStreetLamp3);

	cMeshObject* pStreetLamp4 = new cMeshObject();
	pStreetLamp4->meshName = "Street Lamp.ply";
	pStreetLamp4->friendlyName = "current";
	pStreetLamp4->pos = glm::vec3(-14.1f, 0.3f, -44.8f);
	pStreetLamp4->scale = 0.007f;
	pStreetLamp4->orientation = glm::vec3(0.0f, glm::radians(0.0f), 0.0f);
	pStreetLamp4->diffuseColour = glm::vec4(74.0 / 255.0f, 64.0 / 255.0f, 64.0 / 255.0f, 1.0f);
	//pCar1->specularColour = glm::vec4(0.0f, 0.0f, 0.0f, 1.0f);
	::g_vecObjectsToDraw.push_back(pStreetLamp4);
	/*if (!::g_pVAOManager->LoadModelIntoVAO("Woola_Solid.ply",
		monster,
		shaderProgID))
	{
		std::cout << "ERROR: DIDn't load model" << std::endl;
	}*/


	sModelDrawInfo ballModel;
	::g_pVAOManager->LoadModelIntoVAO("smoothbal_inverted_xyz_n.ply", 
		                               ballModel,
		                               shaderProgID);

	//cMeshObject* 
	g_pBall = new cMeshObject();
	g_pBall->meshName = "smoothbal_inverted_xyz_n.ply";
	g_pBall->friendlyName = "meshball";
	g_pBall->pos = glm::vec3(0.0f, 0.0f, 0.0f);
	g_pBall->scale = 1.0f;
	g_pBall->diffuseColour = glm::vec4(1.0f, 1.0f, 1.0f, 1.0f);
	g_pBall->isWireframe = true;
	g_pBall->isVisible = false;
	::g_vecObjectsToDraw.push_back(g_pBall);

	//NOTE: If we want to have a range of specular (shiny) objects, 
	//      we would change the POWER value of the specular colour.
	//      And, unlike other colour things, it STARTS at 1.0f, and 
	//      goes to REALLY large numbers, like 10,000. 
	//    10 is sort of shiny
	//    100 is more shiny (like a coffee cup)
	//    1,000 is REALLY shiny.

	return;
}