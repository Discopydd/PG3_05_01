#include "TitleScene.h"

void TitleScene::Initialize() {
    // 初始化逻辑
}

void TitleScene::Update(char* keys, char* preKeys) {
    if (keys[DIK_SPACE] && !preKeys[DIK_SPACE]) {
        IScene::sceneNo = STAGE;  // 切换到游戏场景
    }
}

void TitleScene::Draw() {
    Novice::ScreenPrintf(0, 0, "Title Scene");
    Novice::ScreenPrintf(0, 30, "Push Space");
}

