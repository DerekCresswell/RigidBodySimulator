
class RigidBody {

	public :

		float mass;

		//Based on center of object
		position worldPosition;

		float xVelocity, yVelocity;

		bool isStatic = false;

		//To be called once per FixedUpdate
		void ApplyGravity(float gravity){
			
			if(!isStatic){
				


			}

		}

		void MoveBody(){
		
			worldPosition.x += xVelocity;
			worldPosition.y += yVelocity;

		}

};

struct position {

	float x;
	float y;

};