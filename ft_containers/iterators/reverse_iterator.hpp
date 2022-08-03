#ifndef REVERSE_ITERATOR_HPP
#define REVERSE_ITERATOR_HPP

#include "iterator.hpp"
namespace ft{
    template<class Iterator>
    class reverse_iterator
    {
        public:
            typedef Iterator iterator_type;
            typedef typename ft::iterator_traits<Iterator>::iterator_category iterator_category;
            typedef typename ft::iterator_traits<Iterator>::value_type value_type;
            typedef typename ft::iterator_traits<Iterator>::difference_type difference_type;
            typedef typename ft::iterator_traits<Iterator>::pointer pointer;
            typedef typename ft::iterator_traits<Iterator>::reference reference;
            reverse_iterator() : iter(){}
            explicit reverse_iterator (iterator_type it) : iter(it){}
            template <class Iter>
            reverse_iterator(const reverse_iterator<Iter> &rev_it)
            {
                iter(rev_it.base());
            }
            iterator_type base() const
            {
                return (this->iter);
            }
            reference operator *() const
            {
                iterator_type tmp = iter;
                return (*(--tmp));
            }
            reverse_iterator operator+(difference_type n) const
            {
                return (reverse_ieterator(iter - n));
            }
            reverse_iterator& operator++()
            {
                --iter;
                return (*this);
            }
            reverse_iterator  operator++(int)
            {
                reverse_iterator temp = *this;
                ++(*this);
                return temp;
            }
            reverse_iterator& operator+=(difference_type n)
            {
                this->iter -= n;
                return (*this);
            }
            reverse_iterator operator-(difference_type n) const
            {
                return (reverse_iterator(this->iter + n));
            }
            reverse_iterator& operator--()
            {
                ++iter;
                return (*this);
            }
            reverse_iterator  operator--(int)
            {
                reverse_iterator temp = *this;
                --(*this);
                return temp;
            }
            reverse_iterator& operator-=(difference_type n)
            {
                this->iter += n;
                return (*this);
            }
            pointer operator->() const
            {
                return &(operator*());
            }
            reference operator[] (difference_type n) const
            {
                return (this->iter[-n - 1]);
            }
        protected:
            iterator_type iter;
    };
}



#endif