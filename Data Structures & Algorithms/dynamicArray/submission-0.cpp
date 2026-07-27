class DynamicArray {
    int capacity = 0;
    int size = 0;
    int *data;
public:


    DynamicArray(int capacity) : capacity(capacity){
        data = new int[capacity];
    }

    int get(int i) {
        return data[i];
    }

    void set(int i, int n) {
        data[i] = n;
    }

    void pushback(int n) {
        if (size >= capacity) {
            resize();
        }
        data[size] = n;
        ++size;
    }

    int popback() {
        int old = data[size - 1];
        data[size - 1] = 0;
        --size;
        return old;
    }

    void resize() {
        capacity *= 2;
        auto old_data = data;
        data = new int[capacity];
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return capacity;
    }
};
