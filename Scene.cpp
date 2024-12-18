#include "Scene.h"

Scene::Scene() {}

Scene::~Scene() {
    delete inputHandler_;
    delete player_;
}

void Scene::Init() {
    inputHandler_ = new InputHandler();

    // キー入力に対してコマンドを割り当てる
    inputHandler_->AssignMoveLeft2PressKeyA();
    inputHandler_->AssignMoveRight2PressKeyD();

    player_ = new Player();
    player_->Init();
}

void Scene::Update() {
    iCommand_ = inputHandler_->HandleInput();

    // コマンドが存在する場合に実行
    if (iCommand_ != nullptr) {
        iCommand_->Exec(*player_);
    }

    player_->Update();
}

void Scene::Draw() {
    player_->Draw();
}
