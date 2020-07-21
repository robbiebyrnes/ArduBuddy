#ifndef PARALLELRES_H
#define PARALLELRES_H
#pragma once

class ParallelRes
{
	friend class menuHandler;
	public:
		ParallelRes();
		void TwoParallelRES();
		virtual ~ParallelRes();
		
		//member variables
		float Rt;
		unsigned int R1;
		unsigned int R2;	
		unsigned int parResMenu_internal;
		
	protected:
		
	private:
		
};

#endif
