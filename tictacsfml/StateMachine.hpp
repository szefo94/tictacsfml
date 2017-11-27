
#pragma once
#include "stdafx.h"
#include <memory>
#include <stack>
#include "State.hpp"
namespace marcin
{
	typedef std::unique_ptr<State>StateRef;
	class StateMachine
	{
	public:	
		StateMachine(){}
		~StateMachine(){}
		void AddState(StateRef newState, bool isReplacing = true);
		void RemoveState();
		void ProcessStateChanges();

		StateRef &GetActiveState();
	private:
		std::stack<StateRef> _states;
		StateRef _newstate;
		bool _isRemoving;
		bool _isAdding;
		bool _isReplacing;
	};

}