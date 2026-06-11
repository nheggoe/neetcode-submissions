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
        if (size > 0) {
            --size;
        }
        return data[size];
    }

    void resize() {
        capacity *= 2;
        auto newData = new int[capacity];
        for (int i = 0; i <= size; ++i) {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return capacity;
    }
};
