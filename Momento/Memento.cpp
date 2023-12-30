#include<iostream>
#include <string>
#include<vector>

class EditorMemento {
    public:
    explicit EditorMemento(const std::string& content) : content(content) {}

    const std::string& getContent() const{
        return content;
    }
    private:
      std::string content;
};

//Originator 
class TextEditior{
    public:
      void write(const std::string& content){
        content_ = content;
      }
      EditorMemento save() const{
        return EditorMemento(content_);
      }
      void restore(const EditorMemento& memento) {
        content_ = memento.getContent();
    }

    void display() const {
        std::cout << "Content: " << content_<< std::endl;
    }
    private:
    std::string content_;
};

// Caretaker
class History {
public:
    void addMemento(const EditorMemento& memento) {
        mementos_.push_back(memento);
    }

    const EditorMemento& getMemento(size_t index) const {
        return mementos_.at(index);
    }

private:
    std::vector<EditorMemento> mementos_;
};

int main() {
    TextEditior editor;
    History history;

    editor.write("First draft");
    history.addMemento(editor.save());
    editor.display();

    editor.write("Second draft");
    history.addMemento(editor.save());
    editor.display();

    editor.restore(history.getMemento(0));
    editor.display();

    return 0;
}

