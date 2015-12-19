//
// Assets.h
//

// Jiaqi: 
// Responsibility: Get model and texture. Create them if they are not created. 
// Actually, I think Assets and ModelDatabase can be combined into one. 
// They all handle the 'assets' of this database, one is for real models, one is for entries.
// But I think it's designed for high cohesion. 

#include "Common.h"

class Assets
{
public:
    Model* GetModel(const Parameters &params, const std::string &modelName);
    GLuint GetTexture(const std::string &textureFilename);

private:
    std::map<std::string, Model*> _models;
    std::map<std::string, GLuint> _textures;
};