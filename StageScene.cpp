#include "StageScene.h"

void StageScene::Initialize() {}

void StageScene::Update(char* keys, char* preKeys) {
    if (keys[DIK_SPACE] && !preKeys[DIK_SPACE]) {
        IScene::sceneNo = CLEAR; 
    }
}

void StageScene::Draw() {
    Novice::ScreenPrintf(0, 0, "Stage Scene");
    Novice::ScreenPrintf(0, 30, "Push Space");
}






