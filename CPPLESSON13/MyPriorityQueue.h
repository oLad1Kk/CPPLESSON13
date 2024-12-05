#pragma once
#include "MyQueue.h"

namespace myQueue {

	template<typename U>
	class PriorityQueue : public Queue<U>
	{
	public:
		void push_back(U value) {
			Node<U>* el = new Node<U>(value);

			if (Queue<U>::isEmpty()) {
				Queue<U>::head = Queue<U>::current = el;
			}
			else {
				Node<U>* p = Queue<U>::head;
				while (p != nullptr && value < p->info)
					p = p->next;

				if (p == Queue<U>::head) {
					el->next = p;
					p->prev = el;
					Queue<U>::head = el;
				}
				else if (p == nullptr) {
					Queue<U>::current->next = el;
					el->prev = Queue<U>::current;
					Queue<U>::current = el;
				}
				else {
					Node<U>* pPrev = p->prev;
					pPrev->next = el;
					el->prev = pPrev;

					p->prev = el;
					el->next = p;
				}
			}
		}
	};

}