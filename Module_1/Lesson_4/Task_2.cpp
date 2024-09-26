#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct Book {
    std::string isbn;
    std::string title;
    int year;
};

bool compareBooks(const Book& a, const Book& b) {
    if (a.year != b.year)
        return a.year < b.year;
    return a.title < b.title;
}

void merge(std::vector<Book>& books, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<Book> leftBooks(n1);
    std::vector<Book> rightBooks(n2);

    for (int i = 0; i < n1; ++i)
        leftBooks[i] = books[left + i];
    for (int i = 0; i < n2; ++i)
        rightBooks[i] = books[mid + 1 + i];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (compareBooks(leftBooks[i], rightBooks[j])) {
            books[k] = leftBooks[i];
            i++;
        } else {
            books[k] = rightBooks[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        books[k] = leftBooks[i];
        i++;
        k++;
    }

    while (j < n2) {
        books[k] = rightBooks[j];
        j++;
        k++;
    }
}

void mergeSort(std::vector<Book>& books, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(books, left, mid);
        mergeSort(books, mid + 1, right);

        merge(books, left, mid, right);
    }
}

int main() {
    int n;
    std::cin >> n;

    std::vector<Book> books(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> books[i].isbn;
        std::cin.ignore();
        std::getline(std::cin, books[i].title, '"');
        std::getline(std::cin, books[i].title, '"');
        std::cin >> books[i].year;
    }

    mergeSort(books, 0, n - 1);

    for (const auto& book : books) {
        std::cout << book.isbn << " \"" << book.title << "\" " << book.year << std::endl;
    }

    return 0;
}
