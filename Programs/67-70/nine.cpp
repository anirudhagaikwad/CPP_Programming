/*
Imagine you are organizing a grand Multimedia Festival, where various artists and creators will be showcasing their creative works,
including music and videos. To manage the multimedia playback during the festival, you decide to create a C++ program that efficiently
handles the media players for different types of content  such as audio or video.

Input: AudioPlayer("Song1.mp3")
Output: Playing audio: Song1.mp3

Input: VideoPlayer("Movie1.mp4")
Output: Playing video: Movie1.mp4

*/

#include <iostream>
#include <string>

class MediaPlayer {
protected:
    std::string media;
public:
    MediaPlayer(const std::string& m) : media(m) {}

    virtual void play() {
        std::cout << "Playing generic media." << std::endl;
    }
};

class AudioPlayer : public MediaPlayer {
public:
    AudioPlayer(const std::string& m) : MediaPlayer(m) {}

    void play() override {
        std::cout << "Playing audio: " << media << std::endl;
    }
};

class VideoPlayer : public MediaPlayer {
public:
    VideoPlayer(const std::string& m) : MediaPlayer(m) {}

    void play() override {
        std::cout << "Playing video: " << media << std::endl;
    }
};

int main() {
    MediaPlayer* media1 = new AudioPlayer("Song1.mp3");
    MediaPlayer* media2 = new VideoPlayer("Movie1.mp4");

    media1->play();
    media2->play();

    delete media1;
    delete media2;

    return 0;
}

/*
The program defines a base class MediaPlayer and two derived classes AudioPlayer and VideoPlayer.
The base class MediaPlayer has a data member media to store the name of the media and a virtual function play()
to simulate the action of playing media. The AudioPlayer class overrides the play() function to simulate the action of
playing audio with the given media name. The VideoPlayer class overrides the play() function to simulate the action of
playing video with the given media name. In the main() function, objects of AudioPlayer and VideoPlayer are created,
and their respective play() functions are called to simulate playing audio and video.

*/


