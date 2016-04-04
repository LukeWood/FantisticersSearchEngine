#ifndef BINARY_TREE
#define BINARY_TREE
template <typename T> class binarytree
{
	private:
		struct binarynode
		{
			binarynode* left;
			binarynode* right;
			T val;
		};
		void createnode(binarynode*&);
		binarynode* front;
		void deletenode(binarynode*);
	public:
		~binarytree();
		void insert(T);
		binarytree();
};
template <typename T> binarytree<T>::binarytree()
{
	 front = 0;
}
template <typename T> void binarytree<T>::deletenode(binarynode* todel)
{
	if(todel->right != 0)
		deletenode(todel->right);
	if(todel->left != 0)
		deletenode(todel->left);
	delete todel;
}
template <typename T> binarytree<T>::~binarytree()
{
	deletenode(front);
}
template <typename T> void binarytree<T>::createnode(binarynode*& bnode)
{
	bnode = new binarynode;
	bnode->left =0;
	bnode->right = 0;
}
template <typename T> void binarytree<T>::insert(T val)
{
	if(front ==0)
	{
		createnode(front);
		front->val = val;
		return;
	}
	else
	{
		bool right = false;
		binarynode* curr(front);
		while((val > curr->val && curr->right != 0) || (!(val > curr->val) && curr->left != 0))
		{
			if(val > curr->val)
				curr=curr->right;
			else
				curr=curr->left;
		}
		createnode(curr);
		curr->val = val;
	}
}

#endif
