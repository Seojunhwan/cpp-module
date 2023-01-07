#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <string>

class Conversion {
	private:
		std::string	_str;
		double		_double;
		bool		_isChar() const;
	public:
		Conversion(void);
		Conversion(std::string	str);
		Conversion(const Conversion &obj);
		~Conversion();
		
        Conversion& operator=(const Conversion& obj);

		void	putChar() const;
		void	putInt() const;
		void	putFloat() const;
		void	putDouble() const;
};


#endif