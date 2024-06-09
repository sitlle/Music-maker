#include<bits/stdc++.h>

std::map<std::string, float> notes;

void Build_notes() noexcept {
    // 2
    notes["Cb2"] = 493.88;
    notes["C2"] = 523.26;
    notes["Cd2"] = 554.36;
    notes["Db2"] = 554.36;
    notes["D2"] = 587.32;
    notes["Dd2"] = 622.26;
    notes["Eb2"] = 622.26;
    notes["E2"] = 659.26;
    notes["Fb2"] = 659.26;
    notes["Ed2"] = 698.46;
    notes["F2"] = 698.46;
    notes["Fd2"] = 739.98;
    notes["Gb2"] = 739.98;
    notes["G2"] = 784.00;
    notes["Gd2"] = 830.60;
    notes["Ab2"] = 830.60;
    notes["A2"] = 880.00;
    notes["Ad2"] = 932.32;
    notes["Bb2"] = 932.32;
    notes["B2"] = 987.76;
    notes["Bd2"] = 1046.52;
    // 1
    notes["Cb1"] = notes["Cb2"] / 2;
    notes["C1"] = notes["C2"] / 2;
    notes["Cd1"] = notes["Cd2"] / 2;
    notes["Db1"] = notes["Db2"] / 2;
    notes["D1"] = notes["D2"] / 2;
    notes["Dd1"] = notes["Dd2"] / 2;
    notes["Eb1"] = notes["Eb2"] / 2;
    notes["E1"] = notes["E2"] / 2;
    notes["Fb1"] = notes["Fb2"] / 2;
    notes["Ed1"] = notes["Ed2"] / 2;
    notes["F1"] = notes["F2"] / 2;
    notes["Fd1"] = notes["Fd2"] / 2;
    notes["Gb1"] = notes["Gb2"] / 2;
    notes["G1"] = notes["G2"] / 2;
    notes["Gd1"] = notes["Gd2"] / 2;
    notes["Ab1"] = notes["Ab2"] / 2;
    notes["A1"] = notes["A2"] / 2;
    notes["Ad1"] = notes["Ad2"] / 2;
    notes["Bb1"] = notes["Bb2"] / 2;
    notes["B1"] = notes["B2"] / 2;
    notes["Bd1"] = notes["Bd2"] / 2;
    // 0
    notes["Cb0"] = notes["Cb1"] / 2;
    notes["C0"] = notes["C1"] / 2;
    notes["Cd0"] = notes["Cd1"] / 2;
    notes["Db0"] = notes["Db1"] / 2;
    notes["D0"] = notes["D1"] / 2;
    notes["Dd0"] = notes["Dd1"] / 2;
    notes["Eb0"] = notes["Eb1"] / 2;
    notes["E0"] = notes["E1"] / 2;
    notes["Fb0"] = notes["Fb1"] / 2;
    notes["Ed0"] = notes["Ed1"] / 2;
    notes["F0"] = notes["F1"] / 2;
    notes["Fd0"] = notes["Fd1"] / 2;
    notes["Gb0"] = notes["Gb1"] / 2;
    notes["G0"] = notes["G1"] / 2;
    notes["Gd0"] = notes["Gd1"] / 2;
    notes["Ab0"] = notes["Ab1"] / 2;
    notes["A0"] = notes["A1"] / 2;
    notes["Ad0"] = notes["Ad1"] / 2;
    notes["Bb0"] = notes["Bb1"] / 2;
    notes["B0"] = notes["B1"] / 2;
    notes["Bd0"] = notes["Bd1"] / 2;
    // 3
    notes["Cb3"] = notes["Cb2"] * 2;
    notes["C3"] = notes["C2"] * 2;
    notes["Cd3"] = notes["Cd2"] * 2;
    notes["Db3"] = notes["Db2"] * 2;
    notes["D3"] = notes["D2"] * 2;
    notes["Dd3"] = notes["Dd2"] * 2;
    notes["Eb3"] = notes["Eb2"] * 2;
    notes["E3"] = notes["E2"] * 2;
    notes["Fb3"] = notes["Fb2"] * 2;
    notes["Ed3"] = notes["Ed2"] * 2;
    notes["F3"] = notes["F2"] * 2;
    notes["Fd3"] = notes["Fd2"] * 2;
    notes["Gb3"] = notes["Gb2"] * 2;
    notes["G3"] = notes["G2"] * 2;
    notes["Gd3"] = notes["Gd2"] * 2;
    notes["Ab3"] = notes["Ab2"] * 2;
    notes["A3"] = notes["A2"] * 2;
    notes["Ad3"] = notes["Ad2"] * 2;
    notes["Bb3"] = notes["Bb2"] * 2;
    notes["B3"] = notes["B2"] * 2;
    notes["Bd3"] = notes["Bd2"] * 2;
    // 4
    notes["Cb4"] = notes["Cb3"] * 2;
    notes["C4"] = notes["C3"] * 2;
    notes["Cd4"] = notes["Cd3"] * 2;
    notes["Db4"] = notes["Db3"] * 2;
    notes["D4"] = notes["D3"] * 2;
    notes["Dd4"] = notes["Dd3"] * 2;
    notes["Eb4"] = notes["Eb3"] * 2;
    notes["E4"] = notes["E3"] * 2;
    notes["Fb4"] = notes["Fb3"] * 2;
    notes["Ed4"] = notes["Ed3"] * 2;
    notes["F4"] = notes["F3"] * 2;
    notes["Fd4"] = notes["Fd3"] * 2;
    notes["Gb4"] = notes["Gb3"] * 2;
    notes["G4"] = notes["G3"] * 2;
    notes["Gd4"] = notes["Gd3"] * 2;
    notes["Ab4"] = notes["Ab3"] * 2;
    notes["A4"] = notes["A3"] * 2;
    notes["Ad4"] = notes["Ad3"] * 2;
    notes["Bb4"] = notes["Bb3"] * 2;
    notes["B4"] = notes["B3"] * 2;
    notes["Bd4"] = notes["Bd3"] * 2;
}


class NOTE {
public:
    NOTE() = default;
    ~NOTE() = default;

    explicit NOTE(std::string INPUT_NOTE, float time_ = 1.f) {
        if (notes.find(INPUT_NOTE) != notes.end()) {
            GZ = notes[INPUT_NOTE];
            time = time_;
        } else {
            throw std::invalid_argument("Cant find");
        }
    }

    NOTE& operator=(std::string INPUT_NOTE) {
        GZ = notes[INPUT_NOTE];
        time = 1.f;
        return *this;
    }

    explicit NOTE(float INPUT_GZ, float time_ = 1.f) : GZ(INPUT_GZ), time(time_) {}
    
    void Play_Note(float speed = 1.f) const noexcept {
        Beep(GZ, time / speed);
    }

    float& Get_GZ() {
        return GZ;
    }

    float& Get_time() {
        return time;
    }

private:
    float GZ = 0.f;
    float time = 1.f;

    static void Beep(float frequency, float time = 0.2) noexcept {
        std::string str;
        str += "(speaker-test -t sine -f ";
        str += std::to_string(frequency);
        str += ")& pid=$!; sleep ";
        str += std::to_string(time);
        str += "s; kill -9 $pid";
        const char *command;
        command = str.c_str();
        system(command);
        std::cout << "---------------------------------------\n";
    }
};

class ACCORD {
public:
    std::vector<NOTE> accord;

    ACCORD() = default;
    ~ACCORD() = default;

    explicit ACCORD(float time) : _time(time) {}

    void Add_Note(NOTE input_note) {
        accord.push_back(input_note);
    }

    void Add_Note(const std::string& input_note) {
        NOTE add_note;
        if (notes.find(input_note) != notes.end()) {
            add_note.Get_GZ() = notes[input_note];
        } else {
            throw std::invalid_argument("Cant find");
        }
        add_note.Get_time() = _time;
        accord.push_back(add_note);
    }

    void Play_Accord(float speed = 1.f) {
        if (accord.size() == 1 && accord[0].Get_GZ() == 0) { // pause
            int32_t TM = accord[0].Get_time() / 2.f * std::pow(10, 6);
            std::cout << TM << '\n';
            usleep(TM);
            return;
        }
        std::vector<std::thread> threads;
        for (auto& note : accord) {
            NOTE copy_of_note = note;
            threads.emplace_back([copy_of_note, &speed] {
                copy_of_note.Play_Note(speed);
            });
        }
        for (auto &thread : threads) {
            thread.join();
        }
    }
private:
    float _time = 1.f;
};

class MELODY {
public:
    MELODY() {
        Build_notes();
    }
    ~MELODY() = default;

    explicit MELODY(const std::string& INPUT_MELODY) {
        Build_notes();
        Add_Melody(INPUT_MELODY);
    }

    void Add_Melody(const std::string& INPUT_MELODY) {
        for (int it = 0; it < INPUT_MELODY.size(); ++it) {
            std::vector<std::string> add_notes;
            std::string add_time;
            float new_time;
            int copy_it = it;
            if (INPUT_MELODY[copy_it] == '{') { // accord
                ++copy_it;
                add_notes = Find_Accords(INPUT_MELODY, copy_it);
                if (copy_it < INPUT_MELODY.size()) {
                    if (INPUT_MELODY[copy_it] == '[') {
                        ++copy_it;
                        while (copy_it < INPUT_MELODY.size() &&
                               INPUT_MELODY[copy_it] != ']') {
                            add_time += INPUT_MELODY[copy_it];
                            ++copy_it;
                        }
                    }
                }
            } else if (INPUT_MELODY[copy_it] == '(') { // pause
                ++copy_it;
                while (copy_it < INPUT_MELODY.size() &&
                       INPUT_MELODY[copy_it] != ')') {
                    add_time += INPUT_MELODY[copy_it];
                    ++copy_it;
                }
            } else if (Is_Note(INPUT_MELODY[copy_it])) { // one note
                std::string add_note;
                while (copy_it < INPUT_MELODY.size() &&
                       Is_Note(INPUT_MELODY[copy_it])) {
                    add_note += INPUT_MELODY[copy_it];
                    ++copy_it;
                }
                if (copy_it < INPUT_MELODY.size() &&
                    INPUT_MELODY[copy_it] == '[') {
                    ++copy_it;
                    while (copy_it < INPUT_MELODY.size() &&
                           INPUT_MELODY[copy_it] != ']') { // add time
                        add_time +=  INPUT_MELODY[copy_it];
                        ++copy_it;
                    }
                }
                add_notes.push_back(add_note);
            } else {
                continue;
            }
            it = copy_it;
            if (add_time.empty()) {
                new_time = 1.f;
            } else {
                new_time = std::stof(add_time);
            }
            if (add_notes.empty() && !add_time.empty()) {
                add_notes.emplace_back("123456789");
                Add_Accord(add_notes, new_time);
            } else if (add_notes.empty() && add_time.empty()) {
                continue;
            }
            else {
                Add_Accord(add_notes, new_time);
            }
        }
    }

    std::vector<std::string> Find_Accords(const std::string& INPUT_MELODY, int32_t& it) noexcept {
        std::vector<std::string> res;
        while (it < INPUT_MELODY.size() && INPUT_MELODY[it] != '}') {
            std::string add_note;
            while (it < INPUT_MELODY.size() &&
                   Is_Note(INPUT_MELODY[it])) {
                add_note += INPUT_MELODY[it];
                ++it;
            }
            if (!add_note.empty()) {
                res.push_back(add_note);
            }
            if (INPUT_MELODY[it] == '}') {
                ++it;
                break;
            }
            ++it;
        }
        return res;
    }

    void Add_Accord(std::vector<std::string>& NOTE_NAMES, float add_time = 1.f) {
        ACCORD new_accord;
        for (auto &note : NOTE_NAMES) {
            if (notes.find(note) != notes.end()) {
                NOTE new_note;
                new_note.Get_GZ() = notes[note];
                new_note.Get_time() = add_time;
                new_accord.Add_Note(new_note);
            } else if (note == "123456789") {
                NOTE new_note;
                new_note.Get_GZ() = 0;
                new_note.Get_time() = add_time;
                new_accord.Add_Note(new_note);
            } else {
                throw std::invalid_argument("Cant find");
            }
        }
        _note_melody.push_back(new_accord);
    }

    void Play_Melody(float speed = 1.f) {
        for (int it = 0; it < _note_melody.size(); ++it) {
            Play_Accord(it, speed);
        }
    }

    void Melody_Octava_Down() {
        for (auto &note : _note_melody) {
            note.accord[0].Get_GZ() = note.accord[0].Get_GZ() / 2;
        }
    }

    void Melody_Octava_Up() {
        for (auto &note : _note_melody) {
            note.accord[0].Get_GZ() = note.accord[0].Get_GZ() * 2;
        }
    }

private:
    std::vector<ACCORD> _note_melody;

    void Play_Accord(int32_t, float);

    static bool Is_Note(char) noexcept;
};

bool MELODY::Is_Note(char symbol) noexcept {
    if (symbol >= 'a' && symbol <= 'z' ||
        symbol >= 'A' && symbol <= 'Z' ||
        symbol >= '0' && symbol <= '9') {
        return true;
    }
    return false;
}

void MELODY::Play_Accord(int32_t position, float speed = 1.f) {
    if (position >= 0 && position <= _note_melody.size() - 1) {
        _note_melody[position].Play_Accord(speed);
    } else {
        throw std::out_of_range("Out of range");
    }
}

void Play_Both_Hands(const MELODY& RIGHT_HAND, const MELODY& LEFT_HAND, float speed = 1.f) {
    MELODY COPY_RIGHT_HAND = RIGHT_HAND;
    std::thread RIGHT_THREAD([&COPY_RIGHT_HAND, &speed]{
        COPY_RIGHT_HAND.Play_Melody(speed);
    });
    MELODY COPY_LEFT_HAND = LEFT_HAND;
    std::thread LEFT_THREAD([&COPY_LEFT_HAND, &speed]{
        COPY_LEFT_HAND.Play_Melody(speed);
    });
    RIGHT_THREAD.join();
    LEFT_THREAD.join();
}

void solve() {
    std::string input_right_hand_melody =
            "(0.5) Bb3[0.5]"
            "C4[1] Bb3[1] A3[0.5] G3[0.5] (0.5) C4[0.5] "
            "C4[0.5] Bb3[1]"
            "A3[1] G3[1] G3[0.5] F3[0.5] (1) F3[0.5] Eb3[1] F3[0.5] D3[0.5]"
            "(1) (0.5) (2) D3[0.5] D3[1] D3[0.5] D3[1] D4[0.5] D4[0.5] (0.5)"
            "(1) (0.5) (2) Bb3[0.5]"
            "A3[1] A3[0.5] A3[1] Bb3[0.5] Bb3[1] (1) (0.5) (2)" // first
            "Bb3[0.5] C4[1] Bb3[1] A3[0.5] G3[0.5] (0.5) C4[1] Bb3[1]"
            "A3[1] G3[1] G3[0.5] F3[0.5] (1) F3[0.5] Eb3[1] F3[0.5] D3[0.5]"
            "(1) (0.5) (2) D3[0.5] D3[1] D3[0.5] D3[1] D4[0.5] D4[0.5] (0.5)"
            "(1) (0.5) (2)"
            "Bb2[0.5] A2[1] A2[0.5] A2[1] Bb2[0.5] Bb2[1] "
            "{G2, Bb2}[0.25] {G2, Bb2}[0.25] (0.25) {G2, Bb2}[0.25] (0.25)"
            "{G2, Bb2}[0.25] {G2, Bb2}[0.25] (0.25)"
            "{G2, Bb2}[0.25] {G2, Bb2}[0.25] (0.25)"
            "{G2, Bb2}[0.25] (0.25)"
            "{G2, Bb2}[0.25] {G2, Bb2}[0.25] (0.25)"
            "D3[0.25] D2[0.25] G2[0.25] C3[0.25] D2[0.25] G2[0.25] Bb2[0.25] G2[0.25]"
            "D3[0.25] D2[0.25] G2[0.25] C3[0.25] D2[0.25] G2[0.25] C3[0.5]"
            "{D2, G2, D3}[0.5] (0.25) {C2, C3}[0.25] (0.25) {Bb2, Bb3}[0.5] D3[0.25] D2[0.25]"
            "(0.25) C3[0.25] D2[0.25] Bb2[0.5] (0.25)"
            "D2[0.25] Bb2[0.5] D2[0.25] G2[0.5] (0.5)"
            "F1[0.25] A1[0.25] D2[0.25] F1[0.25] A1[0.25] C1[0.5] (0.25)"
            "D2[0.25] Bb2[0.5] D2[0.25] G2[0.5] (0.5)"
            "C2[0.25] F2[0.25] Bb2[0.25] C2[0.25] D2[0.25] A2[0.5] (0.25)"
            "D2[0.25] Bb2[0.5] D2[0.25] G2[0.5] (0.5)"
            "F1[0.25] A1[0.25] D2[0.25] F1[0.25] A1[0.25] C1[0.5] (0.25)"
            "D2[0.25] Bb2[0.5] D2[0.25] G2[0.5] (0.5)"
            "C2[0.25] F2[0.25] Bb2[0.25] C2[0.25] D2[0.25] A2[0.5] (0.25)"
            "A1[0.25] Bb1[0.25] (0.25) G1[0.25] (0.5) C2[0.25] (0.25)"
            "A1[0.25] Bb1[0.25] (0.25) G1[0.25] (0.5) A2[0.5]"
            "Bb2[0.75] Bb2[0.75] Bb2[0.5] (1) Bb2[0.5] D3[0.5]"
            "D3[0.75] C3[0.5] C3[0.5] (1.5) Bb2[0.5]"
            "C3[0.75] Bb2[0.75] A2[1] F2[1] D2[0.5]";

    std::string input_left_hand_melody =
            "(1)"
            "G2[2] (2)"
            "Eb2[2] (2) (4) (4)"
            "Eb1[0.5] G1[0.5] Bb1[0.5] Eb2[1] Bb1[0.5] G1[0.5] Eb1[0.5]"
            "G1[0.5] Bb1[0.5] D2[0.5] G2[1] D2[0.5] Bb1[0.5] G1[0.5]"
            "F1[0.5] A1[0.5] C2[0.5] F2[1] C2[0.5] A1[0.5] F1[0.5]"
            "G1[0.5] Bb1[0.5] D2[0.5] G2[1] D2[0.5] Bb1[0.5] G1[0.5]"
            "Eb1[0.5] G1[0.5] Bb1[0.5] Eb2[1] Bb1[0.5] G1[0.5] Eb1[0.5]"
            "G1[0.5] Bb1[0.5] D2[0.5] G2[1] D2[0.5] Bb1[0.5] G1[0.5]"
            "F1[0.5] A1[0.5] C2[0.5] F2[1] C2[0.5] A1[0.5] F1[0.5]"
            "G1[0.5] Bb1[0.5] D2[0.5] G2[1] D2[0.5] Bb1[0.5] G1[0.5]"
            "Eb1[0.5] G1[0.5] Bb1[0.5] Eb2[1] Bb1[0.5] G1[0.5] Eb1[0.5]"
            "Bb0[0.5] F1[0.5] Bb1[0.5] D2[1] Bb1[0.5] F1[0.5] Bb0[0.5]"
            "F0[0.5] A0[0.5] C1[0.5] F2[1] C1[0.5] A0[0.5] F0[0.5]"
            "{G0, D1, G1}[0.25] {G0, D1, G1}[0.25] (0.25)" // first tact
            "{G0, D1, G1}[0.25] (0.25)"
            "{G0, D1, G1}[0.25] {G0, D1, G1}[0.25] (0.25)"
            "{G0, D1, G1}[0.25] {G0, D1, G1}[0.25] (0.25)"
            "{G0, D1, G1}[0.25] (0.25)"
            "{G0, D1, G1}[0.25] {G0, D1, G1}[0.25] (0.25)"
            "(4)"
            "{G0, D1, G1}[0.25] {G0, D1, G1}[0.25] (0.25)" // second tact
            "{G0, D1, G1}[0.25] (0.25)"
            "{G0, D1, G1}[0.25] {G0, D1, G1}[0.25] (0.25)"
            "{G0, D1, G1}[0.25] {G0, D1, G1}[0.25] (0.25)"
            "{G0, D1, G1}[0.25] (0.25)"
            "{G0, D1, G1}[0.25] {G0, D1, G1}[0.25] (0.25)"
            "G0[0.25] G1[0.25] G0[0.25] G1[0.25] G0[0.25] G1[0.25] G0[0.25] G1[0.25]"
            "F0[0.25] F1[0.25] F0[0.25] F1[0.25] F0[0.25] F1[0.25] F0[0.25] F1[0.25]"
            "Eb0[0.25] Eb1[0.25] Eb0[0.25] Eb1[0.25] Eb0[0.25] Eb1[0.25] Eb0[0.25] Eb1[0.25]"
            "D0[0.25] D1[0.25] D0[0.25] D1[0.25] D0[0.25] D1[0.25] D0[0.25] D1[0.25]"
            "G0[0.25] G1[0.25] G0[0.25] G1[0.25] G0[0.25] G1[0.25] G0[0.25] G1[0.25]"
            "F0[0.25] F1[0.25] F0[0.25] F1[0.25] F0[0.25] F1[0.25] F0[0.25] F1[0.25]"
            "Eb0[0.25] Eb1[0.25] Eb0[0.25] Eb1[0.25] Eb0[0.25] Eb1[0.25] Eb0[0.25] Eb1[0.25]"
            "D0[0.25] D1[0.25] D0[0.25] D1[0.25] D0[0.25] D1[0.25] D0[0.25] D1[0.25]"
            "G1[0.25] Bb1[0.25] (0.25) G1[0.25] (0.5) C2[0.25] (0.25)"
            "G1[0.25] Bb1[0.25] (0.25) A1[0.25] (1)"
            "{G1, D2, G2}[4] {Eb1, Bb1, Eb2}[4] {F1, C2, F2}[4]";

    MELODY right_hand(input_right_hand_melody);

    MELODY left_hand(input_left_hand_melody);

    /*right_hand.Melody_Octava_Down();
    left_hand.Melody_Octava_Down();*/

    // left_hand.Play_Melody(2);
    // right_hand.Play_Melody(2);

    Play_Both_Hands(right_hand, left_hand, 2);
}

int main() {
    Build_notes();
    solve();
    return 0;
}
