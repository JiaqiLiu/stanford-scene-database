//
// Scene.h
//

// Jiaqi:
// In one scene, there are several models. Here they use ModelInstance to record them.
// More importantly, they not only store all the models in a vector. 
// Also, they store those models hierachically. 

#include "Common.h"

class Scene
{
public:
    void Load(const Parameters &params, const std::string &filename, Assets &assets);
    void Render();

private:
    ModelInstance *_root;
    std::vector<ModelInstance*> _allModels;
};