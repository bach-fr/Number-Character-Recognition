#ifndef __NCR__
#define __NCR__

#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/core/core.hpp>
#include <opencv/cv.hpp>

class NCR {
	public:
		int test();
		inline int testbis() {
			std::cout << "test bis" << std::endl;
			return 0;
		}
};

#endif /* __NCR__ */
