#include "Workshop.hpp"
#include "Worker.hpp" 
Workshop::Workshop() {
    // Construtor, se necessário
}

void Workshop::registerWorker(Worker* worker) {
    workers.push_back(worker);
}

void Workshop::releaseWorker(Worker* worker) {
    for (std::vector<Worker*>::iterator it = workers.begin(); it != workers.end(); ++it) {
        if (*it == worker) {
            workers.erase(it);
            return;
        }
    }
}

void Workshop::executeWorkDay() {
    for (std::vector<Worker*>::iterator it = workers.begin(); it != workers.end(); ++it) {
        (*it)->work();
    }
}