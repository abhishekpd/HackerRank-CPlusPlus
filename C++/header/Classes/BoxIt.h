#pragma once
#ifndef HEADER_CLASSES_BOXIT_H_
#define HEADER_CLASSES_BOXIT_H_

namespace BoxIt{
	class Box{
	private:
		int m_length,m_breadth,m_height;
	public:
		Box();
		Box(int length,int breadth,int height);
		Box(const BoxIt::Box& box);

		int getLength() const;
		int getBreadth() const;
		int getHeight() const;

		 bool operator<(const BoxIt::Box& B);


		long long CalculateVolume();
	};

	std::ostream& operator<<(std::ostream& out,const Box& B);
	void Problem();
}





#endif /* HEADER_CLASSES_BOXIT_H_ */
