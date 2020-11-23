#include "binary_trees.h"
/**
 * binary_tree_size - a function that measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_branch, right_branch, total_branches;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	left_branch = binary_tree_size(tree->left);
	left_branch++;

	right_branch = binary_tree_size(tree->right);
	right_branch++;

	total_branches = left_branch + right_branch - 1;
	return (total_branches);
}
