#pragma once
#ifndef HEADER_CLASSES_CLASSESANDOBJECTS_H_
#define HEADER_CLASSES_CLASSESANDOBJECTS_H_

namespace ClassesandObjects
{

	class Student{
	private :
			int m_scores[5];
	public:
			void input();
			int calculateTotalScore();
	};
	void Problem();
}




#endif /* HEADER_CLASSES_CLASSESANDOBJECTS_H_ */
