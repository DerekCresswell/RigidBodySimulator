
#include "RigidBody.cpp"
#include <vector>

using namespace std;

class Simulator {

	//Constants for world
	float GRAVITY = -9.8;

	vector<RigidBody> bodies;

	public:

		//Used for rendering and non physics
		void Update(){
		


		}

		//Only for physics based events / interactions
		void FixedUpdate(){
		
			for (RigidBody body : bodies){

				body.ApplyGravity(GRAVITY);

				body.MoveBody();

			}

		}

};