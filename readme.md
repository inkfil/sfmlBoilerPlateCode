###### Architecture Level To Do's:

1. How to structure SFML project?
2. Have only one window rule.
   2.1. screen styles [fullscreen, borderless, with border, ...]
3. Poll events from window.
    // 3.1. configureable controls from configuration files.
4. Have a game class, that have [GameLoop(), Update(), RenderGraphics(), RenderAudio(), ...] functions.
5. sprites and texture classes.

// . have modular structure to easy integrate new entities and classes.
// . save, load game states/levels/configurations/controls.
// . Have Entity and Deriveable Entities.
// . add audio support.
// . add ai elements.
// . noise producers.
// . path finders.
// . scene graphs + ECS (Entity-Component System).
// . Back-Middle-Front Buffer rendering [aka thriple buffer rendering]
// . add volume and shape to particle to form a rigid body.
// . particle must have position vector, velocity vector, and a scalar mass.
// . 


###### Game Level To Do's:

1. Splash Screen.
2. Main Menus/Sub Menus.
3. 

###### Art Level To Do's:
game mechanics and story ideas

........................................................................................................................

###### Ideas that can be considered.

1. [Architecture level] Update, RenderGraphics, RenderAudio, RenderSprites, RenderTextures, can be a part of Entity class, or can be a part of main game class that can be extended to other entities
2. [Game Level] can user customise game environment?

........................................................................................................................

###### Modules.

1. Core:
2. Entity:
3. Game:
4. Physics:
5. Math:
6. Profiler:
7. Asset management:
8. Time:

........................................................................................................................
###### REFERENCES:

### Scalars, Vector, Matrices and Quaternions Mathematics

1. https://dev.to/fkkarakurt/matrices-and-vectors-in-game-development-67h
2. https://www.void1gaming.com/post/fundamentals-of-vector-math-in-game-development
3. https://www.gamedev.net/tutorials/programming/math-and-physics/practical-use-of-vector-math-in-games-r2968/
4. https://www.gamedev.net/tutorials/programming/math-and-physics/vector-maths-for-game-dev-beginners-r5442/

### Physics:

1. https://www.toptal.com/game/video-game-physics-part-i-an-introduction-to-rigid-body-dynamics
2. https://www.toptal.com/game/video-game-physics-part-ii-collision-detection-for-solid-objects
3. https://www.toptal.com/game/video-game-physics-part-iii-constrained-rigid-body-simulation
4. https://github.com/Sopiro/Physics
5. https://stevelilley.com/category/physics-engine/
6. https://www.gamedesigning.org/engines/bullet/


### SFML:

### OpenGL:

### Audio:

### Game Dev:

1. https://www.toptal.com/game/ultimate-guide-to-processing-simple-game
2. https://www.toptal.com/unity-unity3d/unity-with-mvc-how-to-level-up-your-game-development
3. https://www.gamedesigning.org/category/engines/
4. https://www.gamedesigning.org/engines/haxe/
5. https://github.com/fallahn/xygine [scene ghaph with ECS]




........................................................................................................................

###### Entity Component Pattern:
- app [Application]
   - game [Game]
      - player [KeyboardInput, Renderer]
      - enemies
         - spider [SpiderAI, Renderer]
         - ogre [OgreAI, Renderer]
      - ui [UI]
         - hud [HUD, MouseInput, Renderer]
         - pause-menu [PauseMenu, MouseInput, Renderer]
         - victory-modal [VictoryModal, MouseInput, Renderer]
         - defeat-modal [DefeatModal, MouseInput, Renderer]


// vector math
   https://www.geeksforgeeks.org/using-class-to-implement-vector-quantities-in-c/
   https://www.haroldserrano.com/blog/developing-a-math-engine-in-c-implementing-vectors
   https://www.scratchapixel.com/lessons/mathematics-physics-for-computer-graphics/geometry/math-operations-on-points-and-vectors

add (vector and scalar) (vector and vector) (vector and matrix) (matrix and matrix) [using operator and function]
subtract (vector and scalar) (vector and vector) (vector and matrix) (matrix and matrix) [using operator and function]
dot product (vector and scalar) (vector and vector) (vector and matrix) (matrix and matrix) [using operator and function]
cross product (vector and scalar) (vector and vector) (vector and matrix) (matrix and matrix) [using operator and function]
magnitude [using function]
normalisation [using function]
Vec3f translate(Vec3f P, Vec3f translateValue) { ... } 
Vec3f scale(Vec3f P, Vec3f scaleValue) { ... } 
Vec3f rotate(Vec3f P, Vec3f axis, float angle) { ... } 
... 



sairat (2016)
bhetli tu punha (2017)
tu hi re (2015)
timepass (2014)
mitwaa (2015)
double seat (2015)
kakaan 
ti sadhya kai karte (2017)
coffee and barach kahi (2015)
ashi hi ashiqui (2019)

friendship unlimited (2017)
bus stop (2017)
dostigiri (2018)
lucky (2018)
classmates (2015)
35% kathaavar pass (2016)



According to Newton’s First Law, its velocity will only change when a force is applied on it. When its velocity vector has a non-zero length, its position will change over time.

Each particle must have a fixed mass, an initial position in space and an initial velocity
For each particle, we have to compute the force that is currently acting on it, update its velocity from the acceleration produced by the force, and then update its position based on the velocity we just computed.

The force may come from different sources depending on the kind of simulation. It can be gravity, wind, or magnetism, among others – or it can be a combination of these. It can be a global force, such as constant gravity, or it can be a force between particles, such as attraction or repulsion








