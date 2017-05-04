#include "GameWorld.h"

GameWorld::GameWorld (ApplicationMode mode) : asset_manager(std::make_shared<GameAssetManager>(mode)) {

  asset_manager->AddAsset(std::make_shared<CubeAsset>(2.0f, 1.0f, 0.0f, 0.0, 0.0, 1.0)); //RED CUBE         
  asset_manager->AddAsset(std::make_shared<CubeAsset>(2.0f, 1.0f, 1.0f, 1.0, 1.0, 0.0)); //YELLOW CUBE	
  asset_manager->AddAsset(std::make_shared<CubeAsset>(2.0f, 1.0f, 2.0f, 0.0, 0.0, 1.0));         
  asset_manager->AddAsset(std::make_shared<CubeAsset>(2.0f, 1.0f, 3.0f, 1.0, 1.0, 0.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(2.0f, 1.0f, 4.0f, 0.0, 0.0, 1.0));                   
  asset_manager->AddAsset(std::make_shared<CubeAsset>(2.0f, 1.0f, 0.0f, 1.0, 0.0, 0.0)); 
  asset_manager->AddAsset(std::make_shared<CubeAsset>(2.0f, 1.0f, -1.0f, 1.0, 1.0, 0.0)); 	
  asset_manager->AddAsset(std::make_shared<CubeAsset>(2.0f, 1.0f, -2.0f, 0.0, 0.0, 1.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(2.0f, 1.0f, -3.0f, 1.0, 1.0, 0.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(2.0f, 1.0f, -4.0f, 0.0, 0.0, 1.0));    /* Top side of cubes */

  asset_manager->AddAsset(std::make_shared<CubeAsset>(2.0f, -3.0f, 0.0f, 0.0, 0.0, 1.0)); //RED CUBE         
  asset_manager->AddAsset(std::make_shared<CubeAsset>(2.0f, -3.0f, 1.0f, 1.0, 1.0, 0.0)); //YELLOW CUBE	
  asset_manager->AddAsset(std::make_shared<CubeAsset>(2.0f, -3.0f, 2.0f, 0.0, 0.0, 1.0));         
  asset_manager->AddAsset(std::make_shared<CubeAsset>(2.0f, -3.0f, 3.0f, 1.0, 1.0, 0.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(2.0f, -3.0f, 4.0f, 0.0, 0.0, 1.0));                   
  asset_manager->AddAsset(std::make_shared<CubeAsset>(2.0f, -3.0f, 0.0f, 0.0, 0.0, 1.0)); 
  asset_manager->AddAsset(std::make_shared<CubeAsset>(2.0f, -3.0f, -1.0f, 1.0, 1.0, 0.0)); 	
  asset_manager->AddAsset(std::make_shared<CubeAsset>(2.0f, -3.0f, -2.0f, 0.0, 0.0, 1.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(2.0f, -3.0f, -3.0f, 1.0, 1.0, 0.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(2.0f, -3.0f, -4.0f, 0.0, 0.0, 1.0));    /* Bottom side of cubes */

  asset_manager->AddAsset(std::make_shared<CubeAsset>(1.0f, 0.0f, 0.0f, 1.0, 1.0, 0.0)); //YELLOW CUBE
  asset_manager->AddAsset(std::make_shared<CubeAsset>(1.0f, 0.0f, -1.0f, 0.0, 0.0, 1.0));// RED CUBE
  asset_manager->AddAsset(std::make_shared<CubeAsset>(1.0f, 0.0f, -2.0f, 1.0, 1.0, 0.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(1.0f, 0.0f, -3.0f, 0.0, 0.0, 1.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(1.0f, 0.0f, -4.0f, 1.0, 1.0, 0.0)); 
  asset_manager->AddAsset(std::make_shared<CubeAsset>(1.0f, 0.0f, 0.0f, 1.0, 1.0, 0.0));  
  asset_manager->AddAsset(std::make_shared<CubeAsset>(1.0f, 0.0f, 1.0f, 0.0, 0.0, 1.0)); 
  asset_manager->AddAsset(std::make_shared<CubeAsset>(1.0f, 0.0f, 2.0f, 1.0, 1.0, 0.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(1.0f, 0.0f, 3.0f, 0.0, 0.0, 1.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(1.0f, 0.0f, 4.0f, 1.0, 1.0, 0.0));  /*Left Side of Cubes*/

  asset_manager->AddAsset(std::make_shared<CubeAsset>(3.0f, 0.0f, 0.0f, 1.0, 1.0, 0.0)); //YELLOW CUBE
  asset_manager->AddAsset(std::make_shared<CubeAsset>(3.0f, 0.0f, -1.0f, 0.0, 0.0, 1.0));// RED CUBE
  asset_manager->AddAsset(std::make_shared<CubeAsset>(3.0f, 0.0f, -2.0f, 1.0, 1.0, 0.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(3.0f, 0.0f, -3.0f, 0.0, 0.0, 1.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(3.0f, 0.0f, -4.0f, 1.0, 1.0, 0.0)); 
  asset_manager->AddAsset(std::make_shared<CubeAsset>(3.0f, 0.0f, 0.0f, 1.0, 1.0, 0.0));  
  asset_manager->AddAsset(std::make_shared<CubeAsset>(3.0f, 0.0f, 1.0f, 0.0, 0.0, 1.0)); 
  asset_manager->AddAsset(std::make_shared<CubeAsset>(3.0f, 0.0f, 2.0f, 1.0, 1.0, 0.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(3.0f, 0.0f, 3.0f, 0.0, 0.0, 1.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(3.0f, 0.0f, 4.0f, 1.0, 1.0, 0.0));  /*Right Side of Cubes*/

  asset_manager->AddAsset(std::make_shared<CubeAsset>(3.0f, -3.0f, 0.0f, 1.0, 1.0, 0.0)); //YELLOW CUBE
  asset_manager->AddAsset(std::make_shared<CubeAsset>(3.0f, -3.0f, -1.0f, 0.0, 0.0, 1.0));// RED CUBE
  asset_manager->AddAsset(std::make_shared<CubeAsset>(3.0f, -3.0f, -2.0f, 1.0, 1.0, 0.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(3.0f, -3.0f, -3.0f, 0.0, 0.0, 1.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(3.0f, -3.0f, -4.0f, 1.0, 1.0, 0.0)); 
  asset_manager->AddAsset(std::make_shared<CubeAsset>(3.0f, -3.0f, 0.0f, 1.0, 1.0, 0.0));  
  asset_manager->AddAsset(std::make_shared<CubeAsset>(3.0f, -3.0f, 1.0f, 0.0, 0.0, 1.0)); 
  asset_manager->AddAsset(std::make_shared<CubeAsset>(3.0f, -3.0f, 2.0f, 1.0, 1.0, 0.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(3.0f, -3.0f, 3.0f, 0.0, 0.0, 1.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(3.0f, -3.0f, 4.0f, 1.0, 1.0, 0.0));  /*Bottom Right Side of Cubes*/

  asset_manager->AddAsset(std::make_shared<CubeAsset>(1.0f, -3.0f, 0.0f, 1.0, 1.0, 0.0)); //YELLOW CUBE
  asset_manager->AddAsset(std::make_shared<CubeAsset>(1.0f, -3.0f, -1.0f, 0.0, 0.0, 1.0));// RED CUBE
  asset_manager->AddAsset(std::make_shared<CubeAsset>(1.0f, -3.0f, -2.0f, 1.0, 1.0, 0.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(1.0f, -3.0f, -3.0f, 0.0, 0.0, 1.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(1.0f, -3.0f, -4.0f, 1.0, 1.0, 0.0)); 
  asset_manager->AddAsset(std::make_shared<CubeAsset>(1.0f, -3.0f, 0.0f, 1.0, 1.0, 0.0));  
  asset_manager->AddAsset(std::make_shared<CubeAsset>(1.0f, -3.0f, 1.0f, 0.0, 0.0, 1.0)); 
  asset_manager->AddAsset(std::make_shared<CubeAsset>(1.0f, -3.0f, 2.0f, 1.0, 1.0, 0.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(1.0f, -3.0f, 3.0f, 0.0, 0.0, 1.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(1.0f, -3.0f, 4.0f, 1.0, 1.0, 0.0));  /*Bottom Left Side of Cubes*/

  asset_manager->AddAsset(std::make_shared<CubeAsset>(0.0f, -3.0f, 0.0f, 0.0, 0.0, 1.0)); //RED CUBE
  asset_manager->AddAsset(std::make_shared<CubeAsset>(0.0f, -3.0f, -1.0f, 1.0, 1.0, 0.0));// YELLOW CUBE
  asset_manager->AddAsset(std::make_shared<CubeAsset>(0.0f, -3.0f, -2.0f, 0.0, 0.0, 1.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(0.0f, -3.0f, -3.0f, 1.0, 1.0, 0.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(0.0f, -3.0f, -4.0f, 0.0, 0.0, 1.0)); 
  asset_manager->AddAsset(std::make_shared<CubeAsset>(0.0f, -3.0f, 0.0f, 0.0, 0.0, 1.0));  
  asset_manager->AddAsset(std::make_shared<CubeAsset>(0.0f, -3.0f, 1.0f, 1.0, 1.0, 0.0)); 
  asset_manager->AddAsset(std::make_shared<CubeAsset>(0.0f, -3.0f, 2.0f, 0.0, 0.0, 1.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(0.0f, -3.0f, 3.0f, 1.0, 1.0, 0.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(0.0f, -3.0f, 4.0f, 0.0, 0.0, 1.0));  /*Bottom Left Side of Cubes*/

  asset_manager->AddAsset(std::make_shared<CubeAsset>(4.0f, -3.0f, 0.0f, 0.0, 0.0, 1.0)); //RED CUBE
  asset_manager->AddAsset(std::make_shared<CubeAsset>(4.0f, -3.0f, -1.0f, 1.0, 1.0, 0.0));// YEllOW CUBE
  asset_manager->AddAsset(std::make_shared<CubeAsset>(4.0f, -3.0f, -2.0f, 0.0, 0.0, 1.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(4.0f, -3.0f, -3.0f, 1.0, 1.0, 0.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(4.0f, -3.0f, -4.0f, 0.0, 0.0, 1.0)); 
  asset_manager->AddAsset(std::make_shared<CubeAsset>(4.0f, -3.0f, 0.0f, 0.0, 0.0, 1.0));  
  asset_manager->AddAsset(std::make_shared<CubeAsset>(4.0f, -3.0f, 1.0f, 1.0, 1.0, 0.0)); 
  asset_manager->AddAsset(std::make_shared<CubeAsset>(4.0f, -3.0f, 2.0f, 0.0, 0.0, 1.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(4.0f, -3.0f, 3.0f, 1.0, 1.0, 0.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(4.0f, -3.0f, 4.0f, 0.0, 0.0, 1.0));  /*Bottom Right Side of Cubes*/

  asset_manager->AddAsset(std::make_shared<CubeAsset>(-1.0f, -3.0f, 0.0f, 1.0, 1.0, 0.0)); //YELLOW CUBE
  asset_manager->AddAsset(std::make_shared<CubeAsset>(-1.0f, -3.0f, -1.0f, 0.0, 0.0, 1.0));// RED CUBE
  asset_manager->AddAsset(std::make_shared<CubeAsset>(-1.0f, -3.0f, -2.0f, 1.0, 1.0, 0.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(-1.0f, -3.0f, -3.0f, 0.0, 0.0, 1.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(-1.0f, -3.0f, -4.0f, 1.0, 1.0, 0.0)); 
  asset_manager->AddAsset(std::make_shared<CubeAsset>(-1.0f, -3.0f, 0.0f, 1.0, 1.0, 0.0));  
  asset_manager->AddAsset(std::make_shared<CubeAsset>(-1.0f, -3.0f, 1.0f, 0.0, 0.0, 1.0)); 
  asset_manager->AddAsset(std::make_shared<CubeAsset>(-1.0f, -3.0f, 2.0f, 1.0, 1.0, 0.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(-1.0f, -3.0f, 3.0f, 0.0, 0.0, 1.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(-1.0f, -3.0f, 4.0f, 1.0, 1.0, 0.0));  /*Bottom Left Side of Cubes*/

  asset_manager->AddAsset(std::make_shared<CubeAsset>(5.0f, -3.0f, 0.0f, 1.0, 1.0, 0.0)); //RED CUBE
  asset_manager->AddAsset(std::make_shared<CubeAsset>(5.0f, -3.0f, -1.0f, 0.0, 0.0, 1.0));// YEllOW CUBE
  asset_manager->AddAsset(std::make_shared<CubeAsset>(5.0f, -3.0f, -2.0f, 1.0, 1.0, 0.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(5.0f, -3.0f, -3.0f, 0.0, 0.0, 1.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(5.0f, -3.0f, -4.0f, 1.0, 1.0, 0.0)); 
  asset_manager->AddAsset(std::make_shared<CubeAsset>(5.0f, -3.0f, 0.0f, 1.0, 1.0, 0.0));  
  asset_manager->AddAsset(std::make_shared<CubeAsset>(5.0f, -3.0f, 1.0f, 0.0, 0.0, 1.0)); 
  asset_manager->AddAsset(std::make_shared<CubeAsset>(5.0f, -3.0f, 2.0f, 1.0, 1.0, 0.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(5.0f, -3.0f, 3.0f, 0.0, 0.0, 1.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(5.0f, -3.0f, 4.0f, 1.0, 1.0, 0.0));/*Bottom Right Side of Cubes*/

  asset_manager->AddAsset(std::make_shared<CubeAsset>(6.0f, -2.0f, 0.0f, 0.0, 0.0, 1.0)); //RED CUBE
  asset_manager->AddAsset(std::make_shared<CubeAsset>(6.0f, -2.0f, -1.0f, 1.0, 1.0, 0.0));// YEllOW CUBE
  asset_manager->AddAsset(std::make_shared<CubeAsset>(6.0f, -2.0f, -2.0f, 0.0, 0.0, 1.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(6.0f, -2.0f, -3.0f, 1.0, 1.0, 0.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(6.0f, -2.0f, -4.0f, 0.0, 0.0, 1.0)); 
  asset_manager->AddAsset(std::make_shared<CubeAsset>(6.0f, -2.0f, 0.0f, 0.0, 0.0, 1.0));  
  asset_manager->AddAsset(std::make_shared<CubeAsset>(6.0f, -2.0f, 1.0f, 1.0, 1.0, 0.0)); 
  asset_manager->AddAsset(std::make_shared<CubeAsset>(6.0f, -2.0f, 2.0f, 0.0, 0.0, 1.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(6.0f, -2.0f, 3.0f, 1.0, 1.0, 0.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(6.0f, -2.0f, 4.0f, 0.0, 0.0, 1.0));/*Bottom Right Side of Cubes*/

  asset_manager->AddAsset(std::make_shared<CubeAsset>(7.0f, -2.0f, 0.0f, 1.0, 1.0, 0.0)); //RED CUBE
  asset_manager->AddAsset(std::make_shared<CubeAsset>(7.0f, -2.0f, -1.0f, 0.0, 0.0, 1.0));// YEllOW CUBE
  asset_manager->AddAsset(std::make_shared<CubeAsset>(7.0f, -2.0f, -2.0f, 1.0, 1.0, 0.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(7.0f, -2.0f, -3.0f, 0.0, 0.0, 1.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(7.0f, -2.0f, -4.0f, 1.0, 1.0, 0.0)); 
  asset_manager->AddAsset(std::make_shared<CubeAsset>(7.0f, -2.0f, 0.0f, 1.0, 1.0, 0.0));  
  asset_manager->AddAsset(std::make_shared<CubeAsset>(7.0f, -2.0f, 1.0f, 0.0, 0.0, 1.0)); 
  asset_manager->AddAsset(std::make_shared<CubeAsset>(7.0f, -2.0f, 2.0f, 1.0, 1.0, 0.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(7.0f, -2.0f, 3.0f, 0.0, 0.0, 1.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(7.0f, -2.0f, 4.0f, 1.0, 1.0, 0.0));

  asset_manager->AddAsset(std::make_shared<CubeAsset>(7.5f, 0.0f, 0.0f, 1.0, 1.0, 0.0)); //RED CUBE
  asset_manager->AddAsset(std::make_shared<CubeAsset>(7.5f, 0.0f, -1.0f, 0.0, 0.0, 1.0));// YEllOW CUBE
  asset_manager->AddAsset(std::make_shared<CubeAsset>(7.5f, 0.0f, -2.0f, 1.0, 1.0, 0.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(7.5f, 0.0f, -3.0f, 0.0, 0.0, 1.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(7.5f, 0.0f, -4.0f, 1.0, 1.0, 0.0)); 
  asset_manager->AddAsset(std::make_shared<CubeAsset>(7.5f, 0.0f, 0.0f, 1.0, 1.0, 0.0));  
  asset_manager->AddAsset(std::make_shared<CubeAsset>(7.5f, 0.0f, 1.0f, 0.0, 0.0, 1.0)); 
  asset_manager->AddAsset(std::make_shared<CubeAsset>(7.5f, 0.0f, 2.0f, 1.0, 1.0, 0.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(7.5f, 0.0f, 3.0f, 0.0, 0.0, 1.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(7.5f, 0.0f, 4.0f, 1.0, 1.0, 0.0));

  asset_manager->AddAsset(std::make_shared<CubeAsset>(-2.0f, -2.0f, 0.0f, 0.0, 0.0, 1.0)); //YELLOW CUBE
  asset_manager->AddAsset(std::make_shared<CubeAsset>(-2.0f, -2.0f, -1.0f, 1.0, 1.0, 0.0));// RED CUBE
  asset_manager->AddAsset(std::make_shared<CubeAsset>(-2.0f, -2.0f, -2.0f, 0.0, 0.0, 1.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(-2.0f, -2.0f, -3.0f, 1.0, 1.0, 0.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(-2.0f, -2.0f, -4.0f, 0.0, 0.0, 1.0)); 
  asset_manager->AddAsset(std::make_shared<CubeAsset>(-2.0f, -2.0f, 0.0f, 0.0, 0.0, 1.0));  
  asset_manager->AddAsset(std::make_shared<CubeAsset>(-2.0f, -2.0f, 1.0f, 1.0, 1.0, 0.0)); 
  asset_manager->AddAsset(std::make_shared<CubeAsset>(-2.0f, -2.0f, 2.0f, 0.0, 0.0, 1.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(-2.0f, -2.0f, 3.0f, 1.0, 1.0, 0.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(-2.0f, -2.0f, 4.0f, 0.0, 0.0, 1.0));  /*Bottom Left Side of Cubes*/

  asset_manager->AddAsset(std::make_shared<CubeAsset>(-3.0f, -2.0f, 0.0f, 1.0, 1.0, 0.0)); //YELLOW CUBE
  asset_manager->AddAsset(std::make_shared<CubeAsset>(-3.0f, -2.0f, -1.0f, 0.0, 0.0, 1.0));// RED CUBE
  asset_manager->AddAsset(std::make_shared<CubeAsset>(-3.0f, -2.0f, -2.0f, 1.0, 1.0, 0.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(-3.0f, -2.0f, -3.0f, 0.0, 0.0, 1.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(-3.0f, -2.0f, -4.0f, 1.0, 1.0, 0.0)); 
  asset_manager->AddAsset(std::make_shared<CubeAsset>(-3.0f, -2.0f, 0.0f, 1.0, 1.0, 0.0));  
  asset_manager->AddAsset(std::make_shared<CubeAsset>(-3.0f, -2.0f, 1.0f, 0.0, 0.0, 1.0)); 
  asset_manager->AddAsset(std::make_shared<CubeAsset>(-3.0f, -2.0f, 2.0f, 1.0, 1.0, 0.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(-3.0f, -2.0f, 3.0f, 0.0, 0.0, 1.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(-3.0f, -2.0f, 4.0f, 1.0, 1.0, 0.0));

  asset_manager->AddAsset(std::make_shared<CubeAsset>(-3.5f, 0.0f, 0.0f, 1.0, 1.0, 0.0)); //YELLOW CUBE
  asset_manager->AddAsset(std::make_shared<CubeAsset>(-3.5f, 0.0f, -1.0f, 0.0, 0.0, 1.0));// RED CUBE
  asset_manager->AddAsset(std::make_shared<CubeAsset>(-3.5f, 0.0f, -2.0f, 1.0, 1.0, 0.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(-3.5f, 0.0f, -3.0f, 0.0, 0.0, 1.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(-3.5f, 0.0f, -4.0f, 1.0, 1.0, 0.0)); 
  asset_manager->AddAsset(std::make_shared<CubeAsset>(-3.5f, 0.0f, 0.0f, 1.0, 1.0, 0.0));  
  asset_manager->AddAsset(std::make_shared<CubeAsset>(-3.5f, 0.0f, 1.0f, 0.0, 0.0, 1.0)); 
  asset_manager->AddAsset(std::make_shared<CubeAsset>(-3.5f, 0.0f, 2.0f, 1.0, 1.0, 0.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(-3.5f, 0.0f, 3.0f, 0.0, 0.0, 1.0));
  asset_manager->AddAsset(std::make_shared<CubeAsset>(-3.5f, 0.0f, 4.0f, 1.0, 1.0, 0.0));

}

void GameWorld::Draw() {
  asset_manager->Draw();
  
}

