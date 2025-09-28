#ifndef MULTIPLEINHERITANCE_H
#define MULTIPLEINHERITANCE_H

#include <iostream>
using namespace std;

// Camera class
class Camera {
public:
    void capturePhoto() {
        cout << "Photo captured!" << endl;
    }
    void recordVideo() {
        cout << "Video recording started!" << endl;
    }
};

// MusicPlayer class
class MusicPlayer {
public:
    void playMusic() {
        cout << "Music is playing!" << endl;
    }
    void pauseMusic() {
        cout << "Music paused!" << endl;
    }
};

// Smartphone class that inherits from Camera and MusicPlayer
class Smartphone : public Camera, public MusicPlayer {
public:
    void makeCall() {
        cout << "Making a call..." << endl;
    }
    void sendText() {
        cout << "Sending a text message..." << endl;
    }
};

void demonstrateMultipleInheritance() {
    cout << "=== MULTIPLE INHERITANCE DEMONSTRATION ===" << endl;
    Smartphone myPhone;

    // Using functionality from Camera
    myPhone.capturePhoto();
    myPhone.recordVideo();

    // Using functionality from MusicPlayer
    myPhone.playMusic();
    myPhone.pauseMusic();

    // Using functionality specific to Smartphone
    myPhone.makeCall();
    myPhone.sendText();
    cout << endl;
}

#endif