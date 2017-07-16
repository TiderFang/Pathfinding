#pragma once
#include "IPathFinder.h"

namespace Library
{
	class GreedyBestFirst : public IPathFinder
	{
	public:
		virtual std::deque<std::shared_ptr<Node>> FindPath(std::shared_ptr<Node> start, std::shared_ptr<Node> end, std::set<std::shared_ptr<Node>>& closedSet) override;

	private:
		std::shared_ptr<Node> NodeWithLeastHeuristic(std::set<std::shared_ptr<Node>>& openSet) const;
	};
}