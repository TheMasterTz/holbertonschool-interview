#include "binary_trees.h"

/**
 * tree_height - measures the height of a tree
 * @tree: tree root
 * Return: height
 */
int tree_height(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (-1);

	left = tree_height(tree->left);
	right = tree_height(tree->right);

	if (left < right)
		return (left + 1);

	return (right + 1);
}
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check.
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}
	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
	{
		if (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right))
		{
			return (1);
		}
	}
	return (0);
}
/**
 * swap - swaps nodes when child is greater than parent
 * @arg_node: parent node
 * @arg_child: child node
 * Return: no return
 */
void swap(heap_t **arg_node, heap_t **arg_child)
{
	heap_t *Node, *Child, *Node_child, *Node_left, *Node_right, *Parent;
	int left_right;

	Node = *arg_node, Child = *arg_child;
	if (Child->n > Node->n)
	{
		if(Child->left)
	}
}
/**
 * heap_insert - function that inserts a value in Max Binary Heap
 * @value: value to be inserted
 * @root: tree root
 * Return: pointer to the created node, or NULL on failure.
 */
heap_t *heap_insert(heap_t **root, int value)
{
	heap_t *NewNode;

	if (root == NULL)
	{
		*root = binary_tree_node(NULL, value);
		return (*root);
	}

	if (binary_tree_is_perfect(*root) || binary_tree_is_perfect((*root)->left))
	{
		if ((*root)->left)
		{
			NewNode = heap_insert(&((*root)->left), value);
			swap(root, &((*root)->left));
			return (NewNode);
		}
	}
}

